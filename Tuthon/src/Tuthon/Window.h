#pragma once

#include "Core.h"

#include <string>
#include <GLFW/glfw3.h>

namespace Tuthon {

	class TUTHON_API Window
	{
	private:
		unsigned int width;
		unsigned int height;
		std::string Title;
		GLFWwindow* window;
	public:
		Window(unsigned int width, unsigned int height, std::string Title);
		~Window();
		void Update();
		void Terminate();
		bool IsWindowClosing();
	};
}
