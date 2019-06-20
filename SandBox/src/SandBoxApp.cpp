#include <iostream>
#include <GES/GES.h>

class SandBox : public GES::Application{
public:
	SandBox(){

	}

	~SandBox(){

	}

};

GES::Application* GES::createApplication() {
	return new SandBox();
}
