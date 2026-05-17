using Macad.Common;
using Macad.Common.Serialization;
using System.Collections.Generic;

namespace Macad.Core;

public struct ViewportRect
{
    public int Left   => _Coord[0];
    public int Top    => _Coord[1];
    public int Width  => _Coord[2];
    public int Height => _Coord[3];

    public int Right  => _Coord[0] + _Coord[2];
    public int Bottom => _Coord[1] + _Coord[3];

    //--------------------------------------------------------------------------------------------------

    readonly int[] _Coord = new int[4];

    //--------------------------------------------------------------------------------------------------

    public ViewportRect(int left, int top, int width, int height)
    {
        _Coord[0] = left;
        _Coord[1] = top;
        _Coord[2] = width;
        _Coord[3] = height;
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportRect(double left, double top, double width, double height)
    {
        _Coord[0] = left.ToRoundedInt();
        _Coord[1] = top.ToRoundedInt();
        _Coord[2] = width.ToRoundedInt();
        _Coord[3] = height.ToRoundedInt();
    }

    //--------------------------------------------------------------------------------------------------

    public bool Contains(double posX, double posY)
    {
        return !(posX < Left || posX > Right || posY < Top || posY > Bottom);
    }

    //--------------------------------------------------------------------------------------------------

    public bool Contains(double posX, double posY, out (double x, double y) framePnt)
    {
        if (Contains(posX, posY))
        {
            framePnt = (posX - Left, posY - Top);
            return true;
        }
        framePnt = (posX, posY);
        return false;
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public interface IViewportFrame
{
    void Arrange(ViewportRect parentRect, int spacing);
    ViewportContentFrame GetContentFrame(int viewportIndex);
    IEnumerable<ViewportContentFrame> GetContentFrames();
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ViewportContentFrame : IViewportFrame
{
    [SerializeMember]
    public required int ViewportIndex { get; set; }

    //--------------------------------------------------------------------------------------------------

    public ViewportRect Location { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public void Arrange(ViewportRect parentRect, int spacing)
    {
        Location = parentRect;
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(int viewportIndex)
    {
        return ViewportIndex == viewportIndex ? this : null;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ViewportContentFrame> GetContentFrames()
    {
        yield return this;
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ViewportHorizontalSplitFrame : IViewportFrame
{
    [SerializeMember]
    public required IViewportFrame TopFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame BottomFrame { get; init; }

    [SerializeMember]
    public float SplitRatio { get; init; } = 0.5f;

    //--------------------------------------------------------------------------------------------------

    public void Arrange(ViewportRect parentRect, int spacing)
    {
        int topHeight = (int)((parentRect.Height - spacing) * SplitRatio);
        int bottomHeight = parentRect.Height - spacing - topHeight;
        TopFrame.Arrange(new(parentRect.Left, parentRect.Top, parentRect.Width, topHeight), spacing);
        BottomFrame.Arrange(new(parentRect.Left, parentRect.Bottom - bottomHeight, parentRect.Width, bottomHeight), spacing);
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(int viewportIndex)
    {
        return TopFrame.GetContentFrame(viewportIndex) 
               ?? BottomFrame.GetContentFrame(viewportIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ViewportContentFrame> GetContentFrames()
    {
        foreach (var frame in TopFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in BottomFrame.GetContentFrames())
        {
            yield return frame;
        }
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ViewportVerticalSplitFrame : IViewportFrame
{
    [SerializeMember]
    public required IViewportFrame LeftFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame RightFrame { get; init; }

    [SerializeMember]
    public float SplitRatio { get; init; } = 0.5f;

    //--------------------------------------------------------------------------------------------------

    public void Arrange(ViewportRect parentRect, int spacing)
    {
        int leftWidth = (int)((parentRect.Width - spacing) * SplitRatio);
        int rightWidth = parentRect.Width - spacing - leftWidth;
        LeftFrame?.Arrange(new(parentRect.Left, parentRect.Top, leftWidth, parentRect.Height), spacing);
        RightFrame?.Arrange(new(parentRect.Right - rightWidth, parentRect.Top, rightWidth, parentRect.Height), spacing);
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(int viewportIndex)
    {
        return LeftFrame?.GetContentFrame(viewportIndex) 
               ?? RightFrame?.GetContentFrame(viewportIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ViewportContentFrame> GetContentFrames()
    {
        foreach (var frame in LeftFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in RightFrame.GetContentFrames())
        {
            yield return frame;
        }
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ViewportHorizontalTripleSplitFrame : IViewportFrame
{
    [SerializeMember]
    public required IViewportFrame TopFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame MiddleFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame BottomFrame { get; init; }

    //--------------------------------------------------------------------------------------------------

    public void Arrange(ViewportRect parentRect, int spacing)
    {
        int thirdHeight = (parentRect.Height - 2 * spacing) / 3;
        TopFrame.Arrange(new(parentRect.Left, parentRect.Top, parentRect.Width, thirdHeight), spacing);
        MiddleFrame.Arrange(new(parentRect.Left, parentRect.Top + thirdHeight + spacing, parentRect.Width, parentRect.Height - 2 * (thirdHeight + spacing)), spacing);
        BottomFrame.Arrange(new(parentRect.Left, parentRect.Bottom - thirdHeight, parentRect.Width, thirdHeight), spacing);
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(int viewportIndex)
    {
        return TopFrame.GetContentFrame(viewportIndex)
               ?? MiddleFrame.GetContentFrame(viewportIndex)
               ?? BottomFrame.GetContentFrame(viewportIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ViewportContentFrame> GetContentFrames()
    {
        foreach (var frame in TopFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in MiddleFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in BottomFrame.GetContentFrames())
        {
            yield return frame;
        }
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ViewportVerticalTripleSplitFrame : IViewportFrame
{
    [SerializeMember]
    public required IViewportFrame LeftFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame MiddleFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame RightFrame { get; init; }

    //--------------------------------------------------------------------------------------------------

    public void Arrange(ViewportRect parentRect, int spacing)
    {
        int thirdWidth = (parentRect.Width - 2 * spacing) / 3;
        LeftFrame?.Arrange(new(parentRect.Left, parentRect.Top, thirdWidth, parentRect.Height), spacing);
        MiddleFrame?.Arrange(new(parentRect.Left + thirdWidth + spacing, parentRect.Top, parentRect.Width - 2 * (thirdWidth + spacing), parentRect.Height), spacing);
        RightFrame?.Arrange(new(parentRect.Right - thirdWidth, parentRect.Top, thirdWidth, parentRect.Height), spacing);
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(int viewportIndex)
    {
        return LeftFrame?.GetContentFrame(viewportIndex)
               ?? MiddleFrame?.GetContentFrame(viewportIndex)
               ?? RightFrame?.GetContentFrame(viewportIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ViewportContentFrame> GetContentFrames()
    {
        foreach (var frame in LeftFrame.GetContentFrames())
        {
            yield return frame;
        }

        foreach (var frame in MiddleFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in RightFrame.GetContentFrames())
        {
            yield return frame;
        }
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ViewportQuadSplitFrame : IViewportFrame
{
    [SerializeMember]
    public required IViewportFrame LeftTopFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame RightTopFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame LeftBottomFrame { get; init; }

    [SerializeMember]
    public required IViewportFrame RightBottomFrame { get; init; }

    //--------------------------------------------------------------------------------------------------

    public void Arrange(ViewportRect parentRect, int spacing)
    {
        int halfWidth = (parentRect.Width - spacing) / 2;
        int halfHeight = (parentRect.Height - spacing) / 2;
        LeftTopFrame?.Arrange(new(parentRect.Left, parentRect.Top, halfWidth, halfHeight), spacing);
        RightTopFrame?.Arrange(new(parentRect.Right - halfWidth, parentRect.Top, halfWidth, halfHeight), spacing);
        LeftBottomFrame?.Arrange(new(parentRect.Left, parentRect.Bottom - halfHeight, halfWidth, halfHeight), spacing);
        RightBottomFrame?.Arrange(new(parentRect.Right - halfWidth, parentRect.Bottom - halfHeight, halfWidth, halfHeight), spacing);
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(int viewportIndex)
    {
        return LeftTopFrame?.GetContentFrame(viewportIndex)
               ?? RightTopFrame?.GetContentFrame(viewportIndex)
               ?? LeftBottomFrame?.GetContentFrame(viewportIndex)
               ?? RightBottomFrame?.GetContentFrame(viewportIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ViewportContentFrame> GetContentFrames()
    {
        foreach (var frame in LeftTopFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in RightTopFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in LeftBottomFrame.GetContentFrames())
        {
            yield return frame;
        }
        foreach (var frame in RightBottomFrame.GetContentFrames())
        {
            yield return frame;
        }
    }

    //--------------------------------------------------------------------------------------------------

}
