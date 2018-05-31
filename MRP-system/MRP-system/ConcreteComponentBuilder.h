#pragma once
#include "ComponentBuilder.h"

#include <memory>
#include <vector>
#include "Material.h"
#include "Composite.h"

class ConcreteComponentBuilder : public ComponentBuilder
{
public:
	virtual void buildDoorChipboard();
	virtual void buildVeener();
	virtual void buildHandle();
	virtual void buildHinge();
	virtual void buildDoor();
	virtual shared_ptr<Component> getComponent();
private:
	vector<shared_ptr<Component>> parts;
};