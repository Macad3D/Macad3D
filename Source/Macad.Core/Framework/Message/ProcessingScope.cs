using System;
using Macad.Core.Topology;

namespace Macad.Core
{
    public sealed class ProcessingScope : IDisposable
    {
        public ProcessingScope(Entity referenceEntity, string description)
        {
            CoreContext.Current?.MessageHandler?.OnProcessingStarted(referenceEntity, description);
        }

        #region IDisposable Members

        public void Dispose()
        {
            CoreContext.Current?.MessageHandler?.OnProcessingStopped();
        }

        #endregion
    }
}