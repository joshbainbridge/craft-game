#ifndef PLATFORM_SPECIFICATION_H__
	#define PLATFORM_SPECIFICATION_H__
	
	#ifdef _WIN32
		#define GLEW_STATIC
		#include <GL/glew.h>
		#include <GLFW/glfw3.h>
	#elif __APPLE__
		#define GLFW_INCLUDE_GLCOREARB
		#include <GLFW/glfw3.h>
	#elif __linux__
	#endif
	
#endif