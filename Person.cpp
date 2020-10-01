/**
 * Project OOP3200-F2020-Lesson4
 * @author Ashok Sasitharan
 * @version 1.0
 */


#include "Person.h"

#include <iostream>

/**
 * Person implementation
 */


/**
 * @param firstName
 * @param lastName
 * @param age
 */
 Person::Person(std::string firstName, std::string lastName, const float age)
: m_firstName(std::move(firstName)), m_lastName(std::move(lastName)), m_age(age)
 {

 }

/**
 * @return float
 */
float Person::getAge() const
{
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(const float value) {
    m_age = value;
}

/**
 * @return std::stringj
 */
std::string Person::getFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(const std::string& value)
{
    m_firstName = value;
}

/**
 * @return std::string
 */
std::string Person::getLastName() const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName(const std::string& value)
{
    m_firstName = value;
}

/**
 * @return void
 */
void Person::SaysHello() const
{
    std::cout << getFirstName() << " says hello!" << std::endl;
}

/**
 * @return std::string
 */
std::string Person::ToString()
{

    std::string output_string;
    output_string += "-------------------------------------------\n";
    output_string += "First Name: " + getFirstName() + "\n";
    output_string += "Last Name: " + getLastName() + "\n";
    output_string += "Age: " + std::to_string(getAge()) + "\n";
    output_string += "-------------------------------------------\n";
    return output_string;
}


