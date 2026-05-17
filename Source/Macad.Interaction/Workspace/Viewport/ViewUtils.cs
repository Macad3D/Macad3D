using Macad.Common;
using Macad.Occt;

namespace Macad.Core;

/// <summary>
/// Provides utility methods and enumerations for working with 3D views
/// </summary>
public class ViewUtils
{
    public enum PredefinedView
    {
        Top,
        Bottom,
        Left,
        Right,
        Front,
        Back,
        WorkingPlane
    }

    //--------------------------------------------------------------------------------------------------

    public enum ViewForwardDirection
    {
        XPos,
        XNeg,
        YPos,
        YNeg,
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets the predefined view orientation corresponding to a predefined view.
    /// </summary>
    /// <remarks>Use this method to map a logical view and forward direction to a orientation used directly in
    /// the V3d viewer. Returns null if the specified predefined view does not correspond to a known orientation.</remarks>
    /// <param name="predefinedView">The predefined view for which to retrieve the orientation.</param>
    /// <param name="forwardDirection">The defined forward direction.</param>
    /// <returns>A value of type V3d_TypeOfOrientation representing the orientation for the specified view and direction, or null
    /// if the view is not recognized.</returns>
    public static V3d_TypeOfOrientation? GetPredefinedViewOrientation(PredefinedView predefinedView, ViewForwardDirection forwardDirection)
    {
        return predefinedView switch
        {
            PredefinedView.Top => V3d_TypeOfOrientation.Zup_Top,
            PredefinedView.Bottom => V3d_TypeOfOrientation.Zup_Bottom,
            PredefinedView.Left => forwardDirection switch
            {
                ViewForwardDirection.XNeg => V3d_TypeOfOrientation.Yneg,
                ViewForwardDirection.YPos => V3d_TypeOfOrientation.Xneg,
                ViewForwardDirection.YNeg => V3d_TypeOfOrientation.Xpos,
                _ => V3d_TypeOfOrientation.Ypos
            },
            PredefinedView.Right => forwardDirection switch
            {
                ViewForwardDirection.XNeg => V3d_TypeOfOrientation.Ypos,
                ViewForwardDirection.YPos => V3d_TypeOfOrientation.Xpos,
                ViewForwardDirection.YNeg => V3d_TypeOfOrientation.Xneg,
                _ => V3d_TypeOfOrientation.Yneg
            },
            PredefinedView.Front => forwardDirection switch
            {
                ViewForwardDirection.XNeg => V3d_TypeOfOrientation.Xneg,
                ViewForwardDirection.YPos => V3d_TypeOfOrientation.Ypos,
                ViewForwardDirection.YNeg => V3d_TypeOfOrientation.Yneg,
                _ => V3d_TypeOfOrientation.Xpos
            },
            PredefinedView.Back => forwardDirection switch
            {
                ViewForwardDirection.XNeg => V3d_TypeOfOrientation.Xpos,
                ViewForwardDirection.YPos => V3d_TypeOfOrientation.Yneg,
                ViewForwardDirection.YNeg => V3d_TypeOfOrientation.Ypos,
                _ => V3d_TypeOfOrientation.Xneg
            },
            _ => null
        };
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Determines the up orientation based on the specified view orientation.
    /// </summary>
    /// <param name="orientation">The current orientation of the view.</param>
    /// <param name="forwardDirection">The forward direction of the view, which influences the resulting up orientation.</param>
    /// <returns>A value indicating the up orientation corresponding to the given orientation and forward direction,.</returns>
    public static V3d_TypeOfOrientation GetUpOrientation(V3d_TypeOfOrientation orientation, ViewForwardDirection forwardDirection)
    {
        return orientation switch
        {
            V3d_TypeOfOrientation.Zup_Top => forwardDirection switch
            {
                ViewForwardDirection.XNeg => V3d_TypeOfOrientation.Ypos,
                ViewForwardDirection.YPos => V3d_TypeOfOrientation.Xpos,
                ViewForwardDirection.YNeg => V3d_TypeOfOrientation.Xneg,
                _ => V3d_TypeOfOrientation.Yneg
            },
            V3d_TypeOfOrientation.Zup_Bottom => forwardDirection switch
            {
                ViewForwardDirection.XNeg => V3d_TypeOfOrientation.Yneg,
                ViewForwardDirection.YPos => V3d_TypeOfOrientation.Xneg,
                ViewForwardDirection.YNeg => V3d_TypeOfOrientation.Xpos,
                _ => V3d_TypeOfOrientation.Ypos
            },
            _ => V3d_TypeOfOrientation.Zpos
        };
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets the projection axis corresponding to the specified predefined view and forward direction.
    /// </summary>
    /// <remarks>Returns null if the specified view or direction does not correspond to a valid orientation or
    /// if the resulting axes are invalid.</remarks>
    /// <param name="predefinedView">The predefined view for which to determine the projection axis.</param>
    /// <param name="forwardDirection">The direction that defines the forward orientation.</param>
    /// <returns>A tuple containing the projection and up axes if the orientation can be determined; otherwise, null.</returns>
    public static (Dir Proj, Dir Up)? GetProjAxis(PredefinedView predefinedView, ViewForwardDirection forwardDirection)
    {
        var orientation = GetPredefinedViewOrientation(predefinedView, forwardDirection);
        if (!orientation.HasValue)
        {
            return null;
        }
        var upOrientation = GetUpOrientation(orientation.Value, forwardDirection);

        Dir projAxis = V3d.GetProjAxis(orientation.Value);
        Dir upAxis = V3d.GetProjAxis(upOrientation);
        if (projAxis is { X: 0, Y: 0, Z: 0 } || upAxis is { X: 0, Y: 0, Z: 0 })
        {
            return null;
        }

        return (projAxis, upAxis);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Guesses the predefined view based on the given view direction and the forward direction.
    /// </summary>
    /// <param name="viewDir">The view direction.</param>
    /// <param name="forwardDirection">The direction that defines the forward orientation.</param>
    /// <param name="tolerance">The tolerance for detecting the predefined view.</param>
    /// <returns>The guessed predefined view, or null if it cannot be determined.</returns>
    public static PredefinedView? GuessPredefinedView(Dir viewDir, ViewForwardDirection forwardDirection, double tolerance=0.1)
    {
        if (viewDir.X.IsEqual(1.0, tolerance))
        {
            switch (forwardDirection)
            {
                case ViewForwardDirection.XPos:
                    return PredefinedView.Back;
                case ViewForwardDirection.XNeg:
                    return PredefinedView.Front;
                case ViewForwardDirection.YPos:
                    return PredefinedView.Left;
                case ViewForwardDirection.YNeg:
                    return PredefinedView.Right;
            }
        }
        else if (viewDir.X.IsEqual(-1.0, tolerance))
        {
            switch (forwardDirection)
            {
                case ViewForwardDirection.XPos:
                    return PredefinedView.Front;
                case ViewForwardDirection.XNeg:
                    return PredefinedView.Back;
                case ViewForwardDirection.YPos:
                    return PredefinedView.Right;
                case ViewForwardDirection.YNeg:
                    return PredefinedView.Left;
            }
        }
        else if (viewDir.Y.IsEqual(1.0, tolerance))
        {
            switch (forwardDirection)
            {
                case ViewForwardDirection.XPos:
                    return PredefinedView.Right;
                case ViewForwardDirection.XNeg:
                    return PredefinedView.Left;
                case ViewForwardDirection.YPos:
                    return PredefinedView.Back;
                case ViewForwardDirection.YNeg:
                    return PredefinedView.Front;
            }
        }
        else if (viewDir.Y.IsEqual(-1.0, tolerance))
        {
            switch (forwardDirection)
            {
                case ViewForwardDirection.XPos:
                    return PredefinedView.Left;
                case ViewForwardDirection.XNeg:
                    return PredefinedView.Right;
                case ViewForwardDirection.YPos:
                    return PredefinedView.Front;
                case ViewForwardDirection.YNeg:
                    return PredefinedView.Back;
            }
        }
        else if (viewDir.Z.IsEqual(1.0, tolerance))
        {
            return PredefinedView.Bottom;
        }
        else if (viewDir.Z.IsEqual(-1.0, tolerance))
        {
            return PredefinedView.Top;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

}