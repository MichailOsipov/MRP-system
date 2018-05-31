#include <iostream>
#include <memory>
#include <locale.h>
#include "Material.h"
#include "Composite.h"
#include "Component.h"
#include "ComponentDirector.h"
#include "ConcreteComponentBuilder.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	cout << "Hello from MRP-system" << endl;

	ComponentDirector director;
	shared_ptr<ConcreteComponentBuilder> builder = make_shared<ConcreteComponentBuilder>();
	shared_ptr<Component> component = director.create(builder, "1.txt");

	cout << component->toString() << endl;

	system("pause");
	return 0;
}