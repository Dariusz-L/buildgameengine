#include "System.h"
#include "IManager.h"

System::System() :
	_managers() {

	_managers.reserve(MANAGERS_CAPACITY);
}

System::~System() {
	for (auto m : _managers)
		delete m;
}

void System::OnStart() {
	for (auto m : _managers)
		m->OnStart();
}

void System::Update() {
	for (auto m : _managers)
		m->Update();
}

void System::OnQuit() {
	for (auto m : _managers)
		m->OnQuit();
}

void System::Exit() {
	_exit = true;
}