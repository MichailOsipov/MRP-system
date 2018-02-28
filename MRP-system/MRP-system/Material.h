#pragma once

#include <string>
#include "Component.h"

using namespace std;

class Material: public Component
{
public:
	Material(string name);
	~Material();
	virtual string toString(); // why should i write this ?
};

