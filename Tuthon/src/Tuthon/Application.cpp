#include "Application.h"

namespace Tuthon {

	Application::Application(unsigned int width, unsigned int height, std::string Title){

		window = new Window(width, height, Title);

	}


	Application::~Application()
	{
	}

	void Application::Run() {
		while (!window->IsWindowClosing()) {
		
			window->Update();

		}
	
	}

}