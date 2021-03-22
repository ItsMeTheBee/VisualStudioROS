using System;
using System.Runtime.InteropServices;

namespace SharpRos
{
    public static class NativeTest
    {
        private const string test = "TEST!";
        private const string DllFilePath = @"C:\dev\VisualStudioROS_safe\RosCpp\x64\Release\bin\RosCpp.dll";

        [DllImport(DllFilePath)]
        static public extern void init();

        [DllImport(DllFilePath)]
        static public extern IntPtr CreateNxRos();
        
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

        [DllImport(DllFilePath, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
        public static extern void PublishLaserScan(IntPtr p_NxRos, float min_angle, float max_angle, float angle_increment, float time_increment, float scan_time, float range_min, float range_max, float[] ranges, int range_size, float[] intensities, int intensity_size);
        //public static extern void PublishLaserScan(IntPtr p_NxRos);

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
                //input = Console.ReadKey();
                //PublishString(pNxRos, "yo");
                //PublishInt(pNxRos, 1);
                //PublishDouble(pNxRos, (double) 1.345);
                //PublishFloat(pNxRos, 1.01f);

                //int[] arr = new int[] { 2, 4, 33, 97, 95,82, 1, 2, 10, 62, 34, 4, 8 };
                //PublishIntArray(pNxRos, arr, arr.Length);

                //double[] arr = new double[] { 99.1, 98.23, 92.74, 97.092, 95.001 };
                //PublishDoubleArray(pNxRos, arr, arr.Length);

                //float[] arr = new float[] { 1.2f, 4.91f, 33.7f, 97.0f, 312.2f };
                //PublishFloatArray(pNxRos, arr, arr.Length);
                int SAMPLES = 200;
                int FREQ = 10;
                float angle_min = 0.0f;
                float angle_max = (float)( Math.PI);
                float angle_increment = (float)(Math.PI / SAMPLES);
                float time_increment = 1 / FREQ / SAMPLES; ;
                float scan_time = 0;
                float range_min = 2.0f;
                float range_max = 10.0f;
                float[] ranges = new float[SAMPLES];
                Random random = new Random();
                for (int i = 0; i < SAMPLES; i++)
                {
                    float diff = ((float)i / (float)SAMPLES) * ((float)range_max - (float)range_min);
                    ranges[i] = range_min + diff + (float)random.NextDouble();
                    //Console.WriteLine(ranges[i]);
                }
                float[] intensities = new float[] { };
                Console.WriteLine("Publishing!");
                PublishLaserScan(pNxRos, angle_min, angle_max, angle_increment, time_increment, scan_time, range_min, range_max, ranges, ranges.Length, intensities, intensities.Length);
                //PublishLaserScan(pNxRos);
            }
            while (true);
            //DisposeNxRos(pNxRos);
            //pNxRos = IntPtr.Zero;
            Console.WriteLine("Done!");            
        }
    }
}