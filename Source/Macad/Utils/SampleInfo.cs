using System.Windows.Media.Imaging;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Presentation;

namespace Macad.Window;

/// <summary>
/// Describes a sample model which is shipped with the application.
/// The serialized members are stored in the sample index file, see <see cref="SampleCatalog"/>.
/// </summary>
[SerializeType]
public class SampleInfo : BaseObject
{
    /// <summary>
    /// File name of the model, relative to the samples directory.
    /// </summary>
    [SerializeMember]
    public string FileName { get; set; }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Title which is presented to the user.
    /// </summary>
    [SerializeMember]
    public string Title { get; set; }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Short description of the sample.
    /// </summary>
    [SerializeMember]
    public string Description { get; set; } = "";

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Full path of the model file, set when loaded by the <see cref="SampleCatalog"/>.
    /// </summary>
    public string FilePath { get; set; }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Preview image, available after <see cref="LoadThumbnail"/> has been called.
    /// </summary>
    public BitmapSource Thumbnail
    {
        get { return _Thumbnail; }
        private set
        {
            _Thumbnail = value;
            RaisePropertyChanged();
        }
    }

    BitmapSource _Thumbnail;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// True after <see cref="LoadThumbnail"/> has finished, regardless whether a thumbnail was found.
    /// </summary>
    public bool IsThumbnailLoaded
    {
        get { return _IsThumbnailLoaded; }
        private set
        {
            _IsThumbnailLoaded = value;
            RaisePropertyChanged();
        }
    }

    bool _IsThumbnailLoaded;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Loads the preview image embedded in the model file. Can be called from any thread.
    /// </summary>
    public void LoadThumbnail(int decodePixelWidth)
    {
        Thumbnail = DocumentThumbnail.Load(FilePath, decodePixelWidth);
        IsThumbnailLoaded = true;
    }
}
