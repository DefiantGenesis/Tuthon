#pragma once

#include "Core.h"
namespace Tuthon {

	class TUTHON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

