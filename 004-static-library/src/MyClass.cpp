#include "MyClass.h"

std::string MyClass::sayHello()
{
	return "Hello from static library";
}

extern "C"
{
	char const * staticSayHello() 
	{
		return "Hello world from static library";
	}
}