#include "MyClass.h"

std::string MyClass::sayHello()
{
	return "Hello world from class";
}

extern "C" 
{
	char const * dynamicSayHello()
	{
		return "Say hello from dynamic library";
	}
}