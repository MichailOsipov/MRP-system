#include "Material.h"



Material::Material(string name)
{
	this->name = name;
}


Material::~Material()
{
}

string Material::toString()
{
	return this->name;
}