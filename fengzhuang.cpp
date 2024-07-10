#include "interface.h"
#include <string.h>
#include <iostream>

class Fhello :public Iinterface
{
public:
	Fhello();
	virtual void init();
	virtual void Destroy();
	virtual char* Get();
private:
	char name[1024];
};

Fhello::Fhello()
{
	memset(name, 0, 1024);
	strcpy_s(name, "hello");
}

void Fhello::init()
{
	std::cout << "Fhello::init()" << std::endl;
}

void Fhello::Destroy()
{
	std::cout << "Fhello::Destroy()" << std::endl;
}

char* Fhello::Get()
{
	return name;
}

Iinterface* Iinterface::creatinterface()
{
	return new Fhello();
}