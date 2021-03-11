using System;
using System.Runtime.InteropServices;

namespace SharpRos
{
    public static class NativeTest
    {
        private const string test = "TEST!";
        private const string DllFilePath = @"c:\dev\VisualStudioROS\RosCpp\x64\Release\bin\RosCpp.dll";

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl)]
        private extern static int main(string info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr NxRosConnectorCreate();

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl)]
        public static extern void NxRosConnector_Publish(IntPtr value, string info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl)]
        public static extern void NxRosConnectorDelete(IntPtr value);


        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            main(test);
            //IntPtr NxRosConnect = NxRosConnectorCreate();
            //NxRosConnector_Publish(NxRosConnect, test);
        }
    }
}