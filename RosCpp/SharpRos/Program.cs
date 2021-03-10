using System;
using System.Runtime.InteropServices;

namespace SharpRos
{
    public static class NativeTest
    {
        private const string DllFilePath = @"c:\dev\VisualStudioROS\RosCpp\x64\Release\bin\RosCpp.dll";

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl)]
        private extern static int main();
        

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            main();
        }
    }
}