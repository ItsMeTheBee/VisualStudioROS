#pragma once

#include "wrapper.h"

void init()
{
    rclcpp::init(0, nullptr);
}

NxRos* CreateNxRos()
{
    return new NxRos();
}

void DisposeNxRos(NxRos* p_NxRos)
{
    if (p_NxRos != NULL)
    {
        delete p_NxRos;
        p_NxRos = NULL;
    }
}

void PublishString(NxRos* p_NxRos, const wchar_t* info)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishString(info);
    }
}

void PublishInt(NxRos* p_NxRos, const int info)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishInt(info);
    }
}

void PublishDouble(NxRos* p_NxRos, const double info)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishDouble(info);
    }
}

void PublishFloat(NxRos* p_NxRos, const float info)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishFloat(info);
    }
}

void PublishIntArray(NxRos* p_NxRos, const int info[], const int size)
{

    if (p_NxRos != NULL)
    {
        p_NxRos->publishIntArray(info, size);
    }
}

void PublishDoubleArray(NxRos* p_NxRos, const double info[], const int size)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishDoubleArray(info, size);
    }
}

void PublishFloatArray(NxRos* p_NxRos, const float info[], const int size)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishFloatArray(info, size);
    }
}

void PublishLaserScan(NxRos* p_NxRos, float min_angle, float max_angle, float angle_increment, float time_increment, float scan_time, float range_min, float range_max, float ranges[], int range_size, float intensities[], int intensity_size)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publishLaserScan(min_angle, max_angle, angle_increment, time_increment, scan_time, range_min, range_max, ranges, range_size, intensities, intensity_size);
    }
}

