using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core;

public class OcctSerializers
{
    class OcctSerializer_Pnt2d : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var pnt2d = (Pnt2d)obj;
            double[] values = { pnt2d.X, pnt2d.Y };
            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 2))
            {
                return new Pnt2d(values[0], values[1]);
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class OcctSerializer_Pnt : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var pnt = (Pnt)obj;
            double[] values = { pnt.X, pnt.Y, pnt.Z };
            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 3))
            {
                return new Pnt(values[0], values[1], values[2]);
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class OcctSerializer_Vec : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var vec = (Vec)obj;
            double[] values = { vec.X, vec.Y, vec.Z };
            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 3))
            {
                return new Vec(values[0], values[1], values[2]);
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class OcctSerializer_Dir : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var dir = (Dir)obj;
            double[] values = { dir.X, dir.Y, dir.Z };
            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 3))
            {
                return new Dir(values[0], values[1], values[2]);
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class OcctSerializer_Quaternion : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var quat = (Quaternion)obj;
            double[] values = { quat.X, quat.Y, quat.Z, quat.W };
            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 4))
            {
                return new Quaternion(values[0], values[1], values[2], values[3]);
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class OcctSerializer_Ax1 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var ax1 = (Ax1)obj;
            double[] values = new double[6];
            var pos = ax1.Location;
            values[0] = pos.X; values[1] = pos.Y; values[2] = pos.Z;
            var dir = ax1.Direction;
            values[3] = dir.X; values[4] = dir.Y; values[5] = dir.Z;

            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 6))
            {
                return new Ax1(new Pnt(values[0], values[1], values[2]), new Dir(values[3], values[4], values[5]));
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    class OcctSerializer_Ax2 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var ax2 = (Ax2)obj;
            double[] values = new double[9];
            var pos = ax2.Location;
            values[0] = pos.X; values[1] = pos.Y; values[2] = pos.Z;
            var dir = ax2.Direction;
            values[3] = dir.X; values[4] = dir.Y; values[5] = dir.Z;
            var xdir = ax2.XDirection;
            values[6] = xdir.X; values[7] = xdir.Y; values[8] = xdir.Z;

            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if (values is { Length: 9 })
            {
                return new Ax2(new Pnt(values[0], values[1], values[2]), 
                               new Dir(values[3], values[4], values[5]), 
                               new Dir(values[6], values[7], values[8]));
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class OcctSerializer_Pln : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var pln = (Pln)obj;
            double[] values = new double[7];
            var pos = pln.Location;
            values[0] = pos.X; values[1] = pos.Y; values[2] = pos.Z;
            var rot = pln.Rotation();
            values[3] = rot.X; values[4] = rot.Y; values[5] = rot.Z; values[6] = rot.W;

            return _DoubleArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (double[])_DoubleArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 7))
            {
                return new Pln(new Quaternion(values[3], values[4], values[5], values[6]).ToAx3(new Pnt(values[0], values[1], values[2])));
            }
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static bool _IsInitialized;
    static ISerializer _DoubleArraySerializer;

    public static void Init()
    {
        Debug.Assert(!_IsInitialized);

        _DoubleArraySerializer = Serializer.GetSerializer(typeof(double[]));

        Serializer.AddSerializer(typeof(Pnt), new OcctSerializer_Pnt());
        Serializer.AddSerializer(typeof(Pnt2d), new OcctSerializer_Pnt2d());
        Serializer.AddSerializer(typeof(Vec), new OcctSerializer_Vec());
        Serializer.AddSerializer(typeof(Dir), new OcctSerializer_Dir());
        Serializer.AddSerializer(typeof(Quaternion), new OcctSerializer_Quaternion());
        Serializer.AddSerializer(typeof(Ax1), new OcctSerializer_Ax1());
        Serializer.AddSerializer(typeof(Ax2), new OcctSerializer_Ax2());
        Serializer.AddSerializer(typeof(Pln), new OcctSerializer_Pln());

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}