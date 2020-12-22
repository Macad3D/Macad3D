using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;

namespace Macad.Window
{
    public class ViewModelBase : INotifyPropertyChanged
    {
        public bool SupressPropertyChangedEvent { get; protected set; }

        public event PropertyChangedEventHandler PropertyChanged;

        protected virtual void RaisePropertyChanged([CallerMemberName] String propertyName = "")
        {
            if ((PropertyChanged != null) && (!SupressPropertyChangedEvent))
            {
                PropertyChanged.Invoke(this, new PropertyChangedEventArgs(propertyName));
            }
        }
    }
}