#include "Engine.h"

App* App::_instance { new Engine() };

Engine::Engine() {}

Engine::~Engine() {}