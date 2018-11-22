#include <Tuthon.h>

class Sandbox : public Tuthon::Application {
public:
	Sandbox() 
	: Application(800, 600, "Stuff"){
	
	}
	~Sandbox() {
	
	}



};

Tuthon::Application* Tuthon::CreateApplication() {

	return new Sandbox();

}