#include "Student.h"
#include <iostream>

Student::Student()
    : course("[Unassigned course]")
{ }

Student::Student(const std::string & name, int age, const std::string & course) 
    : Person(name, age), course(course)
{ }

void Student::displayCourse() const {
    std::cout << "Course: " << course << std::endl;
}