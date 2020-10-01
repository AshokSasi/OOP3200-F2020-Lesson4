/**
 * Project OOP3200-F2020-Lesson4
 * @author Ashok Sasitharan
 * @version 1.0
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 */
void Person(string firstName, string lastName, float age);
    
float getAage();
    
/**
 * @param value
 */
void setAge(float value);
    
string getFirstName();
    
/**
 * @param value
 */
void setFirstName(string value);
    
string getLastName();
    
/**
 * @param value
 */
void setLastName(string value);
    
void SaysHello();
    
string ToString();
private: 
    float m_age;
    string m_firstName;
    string m_lastName;
};

#endif //_PERSON_H