#pragma once

#include "Core.h"
#include "Window.h"

#include <string>

namespace Tuthon {

	class TUTHON_API Application
	{
	private:
		Window * window;


	public:
		Application(unsigned int width, unsigned int height, std::string Title);
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

