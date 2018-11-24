#include "Engine.h"

#include "Log.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace Tuthon {

	void Engine::Init() {
		
		Tuthon::Log::Init();
		TN_CORE_WARN("Initialized Log!");
		TN_INFO("Hello!");
		
		/* Initialize the library */
		if (!glfwInit())
			return;

	}


}
