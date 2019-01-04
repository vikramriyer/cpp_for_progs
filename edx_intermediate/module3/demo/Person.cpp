#include "Person.h"
#include <iostream>

Person::Person() 
    : name("[Unknown Name]"), age(0)
{

}

Person::Person(const std::string & name, int age) 
    : name(name), age(age)
{

}

void Person::displayNameAge() const {
    std::cout << "Age: " << age << ", Name: " << name << std::endl;
}