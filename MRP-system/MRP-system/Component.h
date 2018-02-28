#pragma once

#include <memory>
#include <string>

using namespace std;

class Component
{	
public:
	string name;
	Component();
	~Component();

	virtual string toString() = 0;
	virtual void addPart(shared_ptr<Component> part, int count);
};

