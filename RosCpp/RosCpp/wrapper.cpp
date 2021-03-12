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

void Publish(NxRos* p_NxRos, const wchar_t* info)
{
    if (p_NxRos != NULL)
    {
        p_NxRos->publish(info);
    }
}

