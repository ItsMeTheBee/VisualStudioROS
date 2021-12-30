#pragma once

#include "node.h"

#ifdef __cplusplus
extern "C" 
{
#endif

	extern __declspec(dllexport) void Init();

	extern __declspec(dllexport) SampleNode* CreateSampleNode();

	extern __declspec(dllexport) void PublishString(SampleNode* p_node, const wchar_t* info);

	extern __declspec(dllexport) void PublishInt(SampleNode* p_node, const int info);

	extern __declspec(dllexport) void PublishDouble(SampleNode* p_node, const double info);

	extern __declspec(dllexport) void PublishFloat(SampleNode* p_node, const float info);

	extern __declspec(dllexport) void PublishIntArray(SampleNode* p_node, const int info[], const int size);

	extern __declspec(dllexport) void PublishDoubleArray(SampleNode* p_node, const double info[], const int size);

	extern __declspec(dllexport) void PublishFloatArray(SampleNode* p_node, const float info[], const int size);

#ifdef __cplusplus
}
#endif