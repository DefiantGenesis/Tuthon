#include <Tuthon.h>

class Sandbox : public Tuthon::Application {
public:
	Sandbox() {
	
	}
	~Sandbox() {
	
	}



};

Tuthon::Application* Tuthon::CreateApplication() {

	return new Sandbox();

}