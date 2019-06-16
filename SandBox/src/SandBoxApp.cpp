#include <iostream>
#include <GES/Simple.h>

class SandBox : public Simple::Application{
public:
	SandBox(){

	}

	~SandBox(){

	}

};

int main(int argc, char** argv){
	auto sandbox = new SandBox();
	sandbox->run();
	delete sandbox;
}