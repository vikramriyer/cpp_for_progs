#include "Student.h"
#include <iostream>

Student::Student()
    :course("[Unassigned course]")
{}
Student::Student(const std::string & name, int age, const std::string & course) 
    : Person(name, age), course(course)
{}
void Student::display() const
{
    Person::display();
    std::cout << course << std::endl;
}

Student::~Student() 
{
    std::cout << "Student Destroyed." << std::endl;
}