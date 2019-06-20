//
// Created by developer on 6/16/19.
//

#include <iostream>
#include "Application.h"
#include "Log.h"

GES::Application::Application() {

}

GES::Application::~Application() {

}

void GES::Application::run() {
	std::cout << "Hello";
	while(true);
}

int main(int argc, char** argv){
	GES::Log::init();
	GES_CORE_WARN("Initialized log!");
	GES_INFO("Hello");
	auto sandbox = GES::createApplication();
	sandbox->run();
	delete sandbox;
}
