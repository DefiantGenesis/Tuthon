#include "Window.h"

namespace Tuthon {

	Window::Window(unsigned int width, unsigned int height, std::string Title)
		: width(width), height(height), Title(Title) {
		
		/* Create a windowed mode window and its OpenGL context */
		window = glfwCreateWindow(width, height, Title.c_str(), NULL, NULL);
		if (!window)
		{
			glfwTerminate();
			return;
		}

		/* Make the window's context current */
		glfwMakeContextCurrent(window);		
	}


	Window::~Window()
	{
	}
	
	void Window::Update() {
	
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	
	}
	void Window::Terminate() {
		
		glfwTerminate();
	
	}
	bool Window::IsWindowClosing() {
	
	
		return glfwWindowShouldClose(window);
	}

}