#include <iostream>
#include <GES/Simple.h>

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
