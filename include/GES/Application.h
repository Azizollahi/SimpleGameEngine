//
// Created by developer on 6/16/19.
//

#ifndef SIMPLE_APPLICATION_H
#define SIMPLE_APPLICATION_H


namespace GES {
	class Application {
	public:

		Application();
		virtual ~Application();

		void run();

	};
	extern Application* createApplication();
}



#endif //SIMPLE_APPLICATION_H
