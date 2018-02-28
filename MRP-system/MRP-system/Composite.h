#pragma once

#include <memory>
#include <vector>
#include <string>
#include "Component.h"

struct Child {
	shared_ptr<Component> component;
	int count;
};

class Composite: public Component
{
public:
	int timeToCreate;
	vector<Child> children;

	Composite(string name, int timeToCreate);
	~Composite();

	virtual string toString();
	void addPart(shared_ptr<Component> part, int count);
};

