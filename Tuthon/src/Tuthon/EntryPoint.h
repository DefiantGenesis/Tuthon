#pragma once

#ifdef TN_PLATFORM_WINDOWS

extern Tuthon::Application* Tuthon::CreateApplication();

int main(int argc, char** argv) {

	auto app = Tuthon::CreateApplication();
	app->Run();
	delete app;


	return 0;
}

#endif
