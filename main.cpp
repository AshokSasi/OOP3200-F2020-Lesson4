#include <iostream>

#include "Person.h"

int main()
{
	Person person = Person("Bob", "Smith", 35.6f);
	person.SaysHello();
	std::cout << person.ToString() << std::endl;
}

