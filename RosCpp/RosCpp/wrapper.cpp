#pragma once

#include "wrapper.h"

void Init()
{
    rclcpp::init(0, nullptr);
}

SampleNode* CreateSampleNode()
{
    return  new SampleNode();
}


void PublishString(SampleNode* p_node, const wchar_t* info)
{
    if (p_node != NULL)
    {
        std::wstring ws(info);
        std::string string_info(ws.begin(), ws.end());
        p_node->publishString(string_info);
    }
}

void PublishInt(SampleNode* p_node, const int info)
{
    if (p_node != NULL)
    {
        p_node->publishInt(info);
    }
}

void PublishDouble(SampleNode* p_node, const double info)
{
    if (p_node != NULL)
    {
        p_node->publishDouble(info);
    }
}

void PublishFloat(SampleNode* p_node, const float info)
{
    if (p_node != NULL)
    {
        p_node->publishFloat(info);
    }
}

void PublishIntArray(SampleNode* p_node, const int info[], const int size)
{

    if (p_node != NULL)
    {
        p_node->publishIntArray(info, size);
    }
}

void PublishDoubleArray(SampleNode* p_node, const double info[], const int size)
{
    if (p_node != NULL)
    {
        p_node->publishDoubleArray(info, size);
    }
}

void PublishFloatArray(SampleNode* p_node, const float info[], const int size)
{
    if (p_node != NULL)
    {
        p_node->publishFloatArray(info, size);
    }
}