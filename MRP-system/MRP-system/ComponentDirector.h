#pragma once

#include <memory>
#include <string>
#include "Component.h"
#include "ComponentBuilder.h"

class ComponentDirector
{
public:
	shared_ptr<Component> create(shared_ptr<ComponentBuilder> builder, string fileName);
};