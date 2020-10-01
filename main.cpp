#include <iostream>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
	Person person = Person("Bob", "Smith", 35.6f);
	person.SaysHello();
	std::cout << person.ToString() << std::endl;

	Student student = Student("Mike", "Jones", 22.0f, "SMJ123456");
	student.SaysHello();
	student.Studies();
	std::cout << student.ToString() << std::endl;

	Professor professor = Professor("Raymon", "Barry", 55, "PRB5656998");

	professor.SaysHello();
	professor.Teaches();
	std::cout << professor.ToString() << std::endl;
}

