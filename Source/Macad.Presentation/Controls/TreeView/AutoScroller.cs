using System;
using System.Timers;
using System.Windows;
using System.Windows.Input;

namespace Macad.Presentation.TreeView;

sealed class AutoScroller : InputSubscriberBase, IDisposable
{
    public const uint ScrollBorderSize = 10;
    public const double ScrollDelta = 30;
    public const uint ScrollDelay = 50;

    public bool CanScrollUp => TreeView.ScrollViewer.VerticalOffset > 0;
    public bool CanScrollDown => TreeView.ScrollViewer.VerticalOffset < TreeView.ScrollViewer.ScrollableHeight;

    Timer _Timer;

    public AutoScroller(TreeViewEx treeView) 
        : base(treeView)
    {
    }
        
    public void Dispose()
    {
        _Timer?.Dispose();
    }

    internal bool IsEnabled { get; set; }

    internal override void OnMouseMove(MouseEventArgs e)
    {
        base.OnMouseMove(e);
        if (!IsEnabled) return;
        if (!IsLeftButtonDown) return;
        if (_Timer != null) return;
        Point position = e.GetPosition(TreeView);
        if (position.Y < ScrollBorderSize)
        {
            //scroll down
            ScrollContinously(-ScrollDelta);
        }
        else if ((TreeView.RenderSize.Height - position.Y) < ScrollBorderSize)
        {
            //scroll up
            ScrollContinously(ScrollDelta);
        }
    }

    private void ScrollContinously(double delta)
    {
        _Timer = new Timer(200);
        _Timer.AutoReset = true;
        _Timer.Elapsed += OnTimerElapsed;
        _Timer.Start(); //starts scrolling after given time
    }

    void OnTimerElapsed(object sender, ElapsedEventArgs e)
    {
        TreeView.Dispatcher.Invoke(new Action(() =>
        {
            if (Mouse.LeftButton == MouseButtonState.Released)
            {
                _Timer.Elapsed -= OnTimerElapsed;
                _Timer = null;
                return;
            }

            Point mousePosition = GetMousePosition();
            if (mousePosition.Y < ScrollBorderSize)
            {
                //scroll down
                Scroll(-ScrollDelta);
            }
            else if ((TreeView.RenderSize.Height - mousePosition.Y) < ScrollBorderSize)
            {
                //scroll up
                Scroll(ScrollDelta);
            }
            else
            {
                _Timer.Elapsed -= OnTimerElapsed;
                _Timer = null;
            }
        }));
    }

    internal void Scroll(double delta)
    {
        TreeView.ScrollViewer.ScrollToVerticalOffset(TreeView.ScrollViewer.VerticalOffset + delta);
    }
}