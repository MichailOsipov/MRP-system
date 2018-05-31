#include <vector>
#include "ComponentDirector.h"

struct FileData
{
	string componentType;
	int count;
};

shared_ptr<Component> ComponentDirector::create(shared_ptr<ComponentBuilder> builder, string fileName)
{
	// read from file
	FileData doorClipboard = { "doorClipboard", 1 };
	FileData veener = { "veener", 1 };
	FileData handle = { "handle", 1 };
	FileData hinge = { "hinge", 1 };
	FileData door = { "door", 1 };

	vector<FileData> fileData = { doorClipboard, veener, handle, hinge, door};

	for (int i = 0; i < fileData.size(); i++)
	{
		if (fileData[i].componentType == string("doorClipboard")) {
			builder->buildDoorChipboard();
		}
		else if (fileData[i].componentType == string("veener")) {
			builder->buildVeener();
		}
		else if (fileData[i].componentType == string("handle")) {
			builder->buildHandle();
		}
		else if (fileData[i].componentType == string("hinge")) {
			builder->buildHinge();
		}
		else if (fileData[i].componentType == string("door")) {
			builder->buildDoor();
		}
	}

	return builder->getComponent();
}