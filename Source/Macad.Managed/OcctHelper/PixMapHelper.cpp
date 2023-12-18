#include "ManagedPCH.h"

#using "Macad.Occt.dll" as_friend

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;
using namespace System::Runtime::InteropServices;

namespace Macad
{
namespace Occt
{
namespace Helper
{
	public ref class PixMapHelper
	{
	public:
		static Bitmap^ ConvertToBitmap( Macad::Occt::Image_PixMap^ pixMap)
		{
			if(pixMap == nullptr)
				return nullptr;

			auto pm = pixMap->NativeInstance;
			PixelFormat pfm;
			int ciR, ciG, ciB, ciA;
			switch(pm->Format())
			{
			case Image_Format_RGB:
				ciR = 0; ciG = 1; ciB = 2; ciA = 0;
				pfm = PixelFormat::Format24bppRgb;
				break;
			case Image_Format_BGR:
				ciR = 2; ciG = 1; ciB = 0; ciA = 0;
				pfm = PixelFormat::Format24bppRgb;
				break;
			case Image_Format_RGB32:
				ciR = 0; ciG = 1; ciB = 2; ciA = 3;
				pfm = PixelFormat::Format24bppRgb;
				break;
			case Image_Format_RGBA:
				ciR = 0; ciG = 1; ciB = 2; ciA = 3;
				pfm = PixelFormat::Format32bppArgb;
				break;
			case Image_Format_BGRA:
				ciR = 2; ciG = 1; ciB = 0; ciA = 3;
				pfm = PixelFormat::Format32bppArgb;
				break;
			default: 
				return nullptr;
			}

			int width = (int)pm->Width();
			int height = (int)pm->Height();

			auto bitmap = gcnew Bitmap(width, height, pfm);
			auto bitmapData = bitmap->LockBits(Drawing::Rectangle(0, 0, width, height), ImageLockMode::ReadOnly, pfm);
			auto target = (char*)bitmapData->Scan0.ToPointer();

			// Stride is negative if image is expected bottom-up.
			// If pixmap is already bottom-up, reverse conversion by inverting stride
			if(!pixMap->IsTopDown())
			{
				bitmapData->Stride *= -1;
			}
			if(bitmapData->Stride < 0) {
				target += bitmapData->Stride * (1 - bitmap->Height);
			}

			auto source = pm->Data();
			for(int iy=0; iy<height; iy++)
			{
				char* row = target + iy * bitmapData->Stride;
				for(int ix=0; ix<width; ix++)
				{
					row[0] = source[ciB];
					row[1] = source[ciG];
					row[2] = source[ciR];
					if(pfm == PixelFormat::Format32bppArgb)
					{
						row[3] = source[ciA];
						row += 4;
					} else {
						row += 3;
					}
					source += pm->SizePixelBytes();
				}
				source += pm->RowExtraBytes();
			}

			bitmap->UnlockBits(bitmapData);
			return bitmap;
		}

		//--------------------------------------------------------------------------------------------------

		static Macad::Occt::Image_PixMap^ ConvertFromBitmap( Bitmap^ bitmap )
		{
			if(bitmap == nullptr)
				return nullptr;

			::Image_Format fmt(::Image_Format_RGB);
			int pixelSize(3);
			switch (bitmap->PixelFormat)
			{
			case PixelFormat::Format24bppRgb: 
				fmt = ::Image_Format_BGR;
				pixelSize = 3;
				break;

			case PixelFormat::Format32bppRgb: 
				fmt = ::Image_Format_BGR32;
				pixelSize = 4;
				break;

			case PixelFormat::Format32bppArgb: 
				fmt = ::Image_Format_BGRA;
				pixelSize = 4;
				break;

			case PixelFormat::Format32bppPArgb: 
				fmt = ::Image_Format_BGRA;
				pixelSize = 4;
				break;
			default: 
				return nullptr;
			}

			const int width = (int)bitmap->Width;
			const int height = (int)bitmap->Height;

			auto pm = new ::Image_PixMap();
			if(!pm->InitTrash(fmt, width, height ))
				return nullptr;
			pm->SetTopDown(false);

			auto bitmapData = bitmap->LockBits(Drawing::Rectangle(0, 0, width, height), ImageLockMode::ReadOnly, bitmap->PixelFormat);
			unsigned char* source = (unsigned char*)bitmapData->Scan0.ToPointer();

			// copy it bottom-up, OCCT doesn't handle top-down images in all cases
			const int stride = bitmapData->Stride * -1;
			if (stride < 0) {
				source += stride * (1 - bitmap->Height);
			}

			unsigned char* target = pm->ChangeData();
			for(int iy=0; iy<height; iy++)
			{
				unsigned char* row = source + iy * stride;
				for(int ix=0; ix<width; ix++)
				{
					target[0] = row[0];
					target[1] = row[1];
					target[2] = row[2];
					if(pixelSize == 4)
					{
						target[3] = row[3];
					}
					row += pixelSize;
					target += pm->SizePixelBytes();
				}
				target += pm->RowExtraBytes();
			}

			bitmap->UnlockBits(bitmapData);

			return gcnew Macad::Occt::Image_PixMap(pm);
		}

		//--------------------------------------------------------------------------------------------------

		static Macad::Occt::Image_PixMap^ CreateFromBytes( array<byte>^ byteArray, int height, int width, int pixelSize )
		{
			if(byteArray == nullptr || byteArray->Length == 0)
				return nullptr;

			::Image_Format fmt(pixelSize==4 ? ::Image_Format_BGRA : ::Image_Format_BGR);

			auto pm = new ::Image_PixMap();
			if(!pm->InitTrash(fmt, width, height ))
				return nullptr;
			pm->SetTopDown(false);

			pin_ptr<byte> sourcePinPtr = &byteArray[0];
			unsigned char* source = reinterpret_cast<unsigned char*>(sourcePinPtr);

			// copy it bottom-up, OCCT doesn't handle top-down images in all cases
			int stride = width * pixelSize * -1;
			source += stride * (1 - height);

			auto target = pm->ChangeData();
			for(int iy=0; iy<height; iy++)
			{
				unsigned char* row = source + iy * stride;
				for(int ix=0; ix<width; ix++)
				{
					if(pixelSize == 4)
					{
						if(row[3] > 0)
						{
							float alpha = (float)row[3] / 255.0f;
							target[0] = (unsigned char)(row[0] / alpha);
							target[1] = (unsigned char)(row[1] / alpha);
							target[2] = (unsigned char)(row[2] / alpha);
						}
						else
						{
							target[0] = row[0];
							target[1] = row[1];
							target[2] = row[2];
						}
						target[3] = row[3];
					} else {
						target[0] = row[0];
						target[1] = row[1];
						target[2] = row[2];
					}
					row += pixelSize;
					target += pm->SizePixelBytes();
				}
				target += pm->RowExtraBytes();
			}

			return gcnew Macad::Occt::Image_PixMap(pm);
		}

		//--------------------------------------------------------------------------------------------------

		static bool LoadFromMemory( Macad::Occt::Image_AlienPixMap^ pixmap, array<byte>^ byteArray, String^ theFilename )
		{
			if(byteArray == nullptr || byteArray->Length == 0)
				return nullptr;

			pin_ptr<byte> sourcePinPtr = &byteArray[0];
			unsigned char* source = reinterpret_cast<unsigned char*>(sourcePinPtr);
			const char* sz_theFilename = (char*)(void*)Marshal::StringToHGlobalAnsi(theFilename);

			return pixmap->NativeInstance->Load(source, byteArray->Length, ::TCollection_AsciiString(sz_theFilename));
		}
	};
}
}
}