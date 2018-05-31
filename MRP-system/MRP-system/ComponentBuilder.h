#pragma once

#include <memory>
#include "Component.h"

class ComponentBuilder
{
public:
	virtual void buildDoorChipboard() {}
	virtual void buildVeener() {}
	virtual void buildHandle() {}
	virtual void buildHinge() {}
	virtual void buildDoor() {}
	virtual shared_ptr<Component> getComponent() { return 0; }
};