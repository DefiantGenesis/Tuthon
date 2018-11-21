#pragma once

#ifdef TN_PLATFORM_WINDOWS
	#ifdef TN_BUILD_DLL
		#define TUTHON_API __declspec(dllexport)
	#else
		#define TUTHON_API __declspec(dllimport)
	#endif

#else
	#error Tuthon only supports Windows!
#endif