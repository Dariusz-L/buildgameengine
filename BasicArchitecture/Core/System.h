#pragma once

#include "Runable.h"

#include <vector>

class IManager;

class System : public Runable {
	
private:
	bool _exit = false;

protected:
	std::vector<IManager*> _managers;

public:
	System();
	~System();

	virtual void OnStart() override;
	virtual void Update()  override;
	virtual void OnQuit()  override;

	void Exit();

	const unsigned char MANAGERS_CAPACITY = 20;
};