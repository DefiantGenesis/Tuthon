#include "Engine.h"

#include "Log.h"

namespace Tuthon {

	void Engine::Init() {
		
		Tuthon::Log::Init();
		TN_CORE_WARN("Initialized Log!");
		TN_INFO("Hello!");
		
	}


}
