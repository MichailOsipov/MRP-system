#include <iostream>
#include <memory>
#include <locale.h>
#include "Material.h"
#include "Composite.h"
#include "Component.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	cout << "Hello from MRP-system" << endl;

	shared_ptr<Component> doorChipboard = make_shared<Material>("Дверца ДСП");
	shared_ptr<Component> veener = make_shared<Material>("Шпон");
	shared_ptr<Component> handle = make_shared<Material>("Ручка");
	shared_ptr<Component> hinge = make_shared<Material>("Петля");

	shared_ptr<Component> door = make_shared<Composite>("Дверца", 5);
	door->addPart(doorChipboard, 1);
	door->addPart(veener, 1);
	door->addPart(handle, 1);
	door->addPart(hinge, 2);

	cout << door->toString() << endl;
	system("pause");
	return 0;
}