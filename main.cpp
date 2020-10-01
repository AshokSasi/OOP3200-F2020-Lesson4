#include <iostream>
#include <vector>


#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
	/*person is abstract so we cannot instantiate object of type person*/
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


	//Dynamic memory allocation with objects
	std::vector<Person*> people;
	people.push_back(new Professor("John", "Ding", 22.0f,"PJD2312312"));
	people[0]->SaysHello();
	std::cout << people[0]->ToString() << std::endl;

	people.push_back(new Student("James", "Smith", 19.0f, "SJS45655654"));
	people[1]->SaysHello();
	std::cout << people[1]->ToString() << std::endl;
}

