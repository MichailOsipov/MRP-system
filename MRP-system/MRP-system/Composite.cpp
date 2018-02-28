#include "Composite.h"



Composite::Composite(string name, int timeToCreate)
{
	this->name = name;
	this->timeToCreate = timeToCreate;
}


Composite::~Composite()
{
}

string Composite::toString()
{
	string str = "";

	str += "[";
	str += (this->name + ", ");
	str += ("Время изготовления: " + to_string(this->timeToCreate) + ", ");

	for (int i = 0; i < this->children.size(); i++)
	{
		Child currChild = children[i];
		str += to_string(currChild.count);
		str += "x";
		str += ("[" + currChild.component->toString() + "]");
		if (i != this->children.size() - 1)
		{
			str += ", ";
		}
	}

	str += "]";
	return str;
}

void Composite::addPart(shared_ptr<Component> part, int count)
{
	Child child;
	child.count = count;
	child.component = part;
	this->children.push_back(child);
}