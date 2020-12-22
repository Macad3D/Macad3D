#if version >= 2.0
    Console.Write("-Version >= 2.0-");
#elif version < 1.1
    Console.Write("-Version < 1.1-");
#else
    Console.Write("-Version Else-");
#endif
