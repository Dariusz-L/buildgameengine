#pragma once

class Runable {

public:
	virtual ~Runable() {}

	virtual void OnStart() = 0;
	virtual void Update()  = 0;
	virtual void OnQuit()  = 0;

};

