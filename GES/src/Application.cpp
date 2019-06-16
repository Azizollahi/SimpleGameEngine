//
// Created by developer on 6/16/19.
//

#include <iostream>
#include "Application.h"

GES::Application::Application() {

}

GES::Application::~Application() {

}

void GES::Application::run() {
	std::cout << "Hello";
	while(true);
}

int main(int argc, char** argv){
	auto sandbox = GES::createApplication();
	sandbox->run();
	delete sandbox;
}
