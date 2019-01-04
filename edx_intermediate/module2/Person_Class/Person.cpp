#include "Person.h"
#include <iostream>

Person::Person() {
    std::cout << "Constructor called. (default)" << std::endl;
}

Person::Person(std::string firstName_in, std::string lastName_in) {
    std::cout << "Constructor called. (2)" << std::endl;
    firstName = firstName_in;
    lastName = lastName_in;
}

Person::Person(std::string firstName_in, std::string lastName_in, int age_in) {
    std::cout << "Constructor called. (3)" << std::endl;
    firstName = firstName_in;
    lastName = lastName_in;
    age = age_in;
}

void Person::setFirstName(std::string firstName_in) {
    firstName = firstName_in;
}

std::string Person::getFirstName() {
    return firstName;
}

void Person::setLastName(std::string lastName_in) {
    lastName = lastName_in;
}

std::string Person::getLastName() {
    return lastName;
}

void Person::setAge(int age_in) {
    age = age_in;
}

int Person::getAge() {
    return age;
}

void Person::sayHello() {
    std::cout << "Hey " << firstName << " " << lastName << ". Your age is " << age << std::endl; 
}

Person::~Person(){
    std::cout << "Destructor called." << std::endl;
}