using System;
using System.Runtime.InteropServices;

namespace SharpRos
{
    public static class NativeTest
    {
        private const string test = "TEST!";
        private const string DllFilePath = @"c:\dev\VisualStudioROS\RosCpp\x64\Release\bin\RosCpp.dll";

        [DllImport(DllFilePath)]
        static public extern void init();

        [DllImport(DllFilePath)]
        static public extern IntPtr CreateNxRos();
        
        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void Publish(IntPtr value, string info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl)]
        public static extern void DisposeNxRos(IntPtr value);
        

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            init();
            IntPtr pNxRos = CreateNxRos();
            ConsoleKeyInfo input;
            do
            {
                input = Console.ReadKey();
                Publish(pNxRos, "testFromSharp");
            } 
            while (input.Key != ConsoleKey.Escape);
            DisposeNxRos(pNxRos);
            pNxRos = IntPtr.Zero;
            Console.WriteLine("Done!");            
        }
    }
}