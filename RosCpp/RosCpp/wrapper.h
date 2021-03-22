#pragma once

#include "main.h"

#ifdef __cplusplus
extern "C" 
{
#endif

	extern __declspec(dllexport) void init();

	extern __declspec(dllexport) NxRos* CreateNxRos();

	extern __declspec(dllexport) void DisposeNxRos(NxRos* p_NxRos);

	extern __declspec(dllexport) void PublishString(NxRos* p_NxRos, const wchar_t* info);

	extern __declspec(dllexport) void PublishInt(NxRos* p_NxRos, const int info);

	extern __declspec(dllexport) void PublishDouble(NxRos* p_NxRos, const double info);

	extern __declspec(dllexport) void PublishFloat(NxRos* p_NxRos, const float info);

	extern __declspec(dllexport) void PublishIntArray(NxRos* p_NxRos, const int info[], const int size);

	extern __declspec(dllexport) void PublishDoubleArray(NxRos* p_NxRos, const double info[], const int size);

	extern __declspec(dllexport) void PublishFloatArray(NxRos* p_NxRos, const float info[], const int size);

	extern __declspec(dllexport) void PublishLaserScan(NxRos* p_NxRos, float min_angle, float max_angle, float angle_increment, float time_increment, float scan_time, float range_min, float range_max, float ranges[], int range_size, float intensities[], int intensity_size = 0);


#ifdef __cplusplus
}
#endif