﻿namespace Macad.Presentation.TreeView;

class VerticalArea
{
    public double Top { get; set; }
    public double Bottom { get; set; }

    public bool IsWithin(VerticalArea area)
    {
        return 
            (area.Top >= Top && area.Top <= Bottom)
            ||
            (area.Bottom >= Top && area.Bottom <= Bottom)
            ||
            (area.Top<= Top && area.Bottom >= Bottom);
    }
}