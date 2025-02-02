#pragma once

#ifdef HZ_PLATFORM_WINDOWS // HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZLEGE_API __declspec(dllexport)
	#else
		#define HAZLEGE_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error HazleGE only supports Windows!
#endif 

