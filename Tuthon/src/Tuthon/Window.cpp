#include "Window.h"
#include "Log.h"

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
		GLenum err = glewInit();
		if (GLEW_OK != err) {
			
			TN_CORE_FATAL("Failed to Initialize GLEW!!!!!");
			return;
			
		}
	}


	Window::~Window()
	{
	}
	
	void Window::Update() {
		
		unsigned int temp;
		glGenBuffers(1,&temp);

		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();

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