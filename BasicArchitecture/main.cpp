#include "Engine\Engine.h"

int main (int argc, char** argv) {

	App* app = App::Instance();

	app->OnStart();
	app->Update();
	app->OnQuit();

	system("pause");
	return 0;

}