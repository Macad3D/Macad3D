namespace Macad.Interaction
{
    [AutoRegisterHost]
    public static partial class InteractionModule
    {
        static bool _IsInitialized;

        //--------------------------------------------------------------------------------------------------

        public static void Initialize()
        {
            if (_IsInitialized)
                return;

            _DoAutoRegister(); 

            _IsInitialized = true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}