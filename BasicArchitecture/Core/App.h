#pragma once

#include "System.h"

class App : public System {

protected:
	static App* _instance;

public:

	static App* Instance() {
		return _instance;
	}

};