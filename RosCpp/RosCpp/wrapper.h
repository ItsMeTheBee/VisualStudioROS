#pragma once

#include "main.h"

#ifdef __cplusplus
extern "C" 
{
#endif

	extern __declspec(dllexport) void init();

	extern __declspec(dllexport) NxRos* CreateNxRos();

	extern __declspec(dllexport) void DisposeNxRos(NxRos* p_NxRos);

	extern __declspec(dllexport) void Publish(NxRos* p_NxRos, const wchar_t* info);

#ifdef __cplusplus
}
#endif