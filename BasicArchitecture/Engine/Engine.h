#pragma once

#include "..\Core\App.h"

class IManager;

class Engine : public App {

private:

public:
	Engine();
	~Engine();

	void OnStart() override {}
	void Update()  override {}
	void OnQuit()  override {}

};