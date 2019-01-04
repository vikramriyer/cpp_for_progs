#include "Person.h"
#include <iostream>

Person::Person() 
    : name("[Unknown name]"), age(0)
{}
Person::Person(const std::string & name, int age) 
    : name(name), age(age)
{}

void Person::display() const{
    std::cout << name << ", " << age << std::endl;
}

Person::~Person() {
    std::cout << "Person Destructed." << std::endl;
}