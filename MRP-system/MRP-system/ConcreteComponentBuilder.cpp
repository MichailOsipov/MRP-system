#pragma once
#include "ConcreteComponentBuilder.h"

void ConcreteComponentBuilder::buildDoorChipboard()
{
	parts.push_back(make_shared<Material>("doorClipboard"));
}
void ConcreteComponentBuilder::buildVeener()
{
	parts.push_back(make_shared<Material>("veener"));
}
void ConcreteComponentBuilder::buildHandle()
{
	parts.push_back(make_shared<Material>("handle"));
}
void ConcreteComponentBuilder::buildHinge()
{
	parts.push_back(make_shared<Material>("hinge"));
}
void ConcreteComponentBuilder::buildDoor()
{
	shared_ptr<Component> door = make_shared<Composite>("door", 4);
	door->addPart(parts[parts.size() - 1], 1);
	door->addPart(parts[parts.size() - 2], 1);
	door->addPart(parts[parts.size() - 3], 1);
	door->addPart(parts[parts.size() - 4], 1);

	parts.pop_back();
	parts.pop_back();
	parts.pop_back();
	parts.pop_back();

	parts.push_back(door);
}
shared_ptr<Component> ConcreteComponentBuilder::getComponent()
{
	return parts[parts.size() - 1];
}
