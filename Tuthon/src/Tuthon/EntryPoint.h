#pragma once

#ifdef TN_PLATFORM_WINDOWS

extern Tuthon::Application* Tuthon::CreateApplication();

int main(int argc, char** argv) {

	Tuthon::Log::Init();
	TN_CORE_WARN("Initialized Log!");
	TN_INFO("Hello!");

	auto app = Tuthon::CreateApplication();
	app->Run();
	delete app;


	return 0;
}

#endif
