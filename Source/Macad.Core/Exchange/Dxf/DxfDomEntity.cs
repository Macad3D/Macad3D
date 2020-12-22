using System;
using System.Collections.Generic;

namespace Macad.Core.Exchange.Dxf
{
    public abstract class DxfDomEntity
    {
        protected string LayerName;
        internal abstract void Write(DxfWriter writer);
        public abstract bool Read(DxfReader reader);
    }
}