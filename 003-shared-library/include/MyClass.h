#include <string>

class MyClass
{
public:
	std::string sayHello();
};

extern "C"
{
	char const * dynamicSayHello();
}