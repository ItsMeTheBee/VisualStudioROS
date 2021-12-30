using System;
using System.Runtime.InteropServices;

namespace RosFromCSharp
{
    class Program
    {
        private const string DllFilePath = @"C:\dev\VisualStudioROS\RosCpp\x64\Release\RosCpp.dll";

        [DllImport(DllFilePath)]
        static public extern void Init();

        [DllImport(DllFilePath)]
        static public extern IntPtr CreateSampleNode();

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishString(IntPtr value, string info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishInt(IntPtr value, int info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishDouble(IntPtr value, double info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishFloat(IntPtr value, float info);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishIntArray(IntPtr value, int[] info, int size);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishDoubleArray(IntPtr value, double[] info, int size);

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishFloatArray(IntPtr value, float[] info, int size);

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Init();
            IntPtr pNode = CreateSampleNode();
            string test_info = "Hello from C Sharp!";

            while (true)
                PublishString(pNode, test_info);
        }
    }
}
