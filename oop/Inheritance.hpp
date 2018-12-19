#include<iostream>
#include<string>

class Student {
    private:
        int id;
    public:
        void setId(int idIn);
        int getId();
        Student();
};

Student::Student(){
    id = 1000;
}

void Student::setId(int idIn) {
    id = idIn;
}

int Student::getId() {
    return id;
}

class GradStudent : private Student {
    private:
        std::string degree;
    public:
        void setDegree(std::string degreeIn);
        std::string getDegree();
        void setStudentId(int idIn);
        int getStudentId();
        GradStudent();
};

GradStudent::GradStudent() {
    degree = "undeclared";
}

void GradStudent::setDegree(std::string degreeIn) {
    degree = degreeIn;
}

std::string GradStudent::getDegree() {
    return degree;
}
void GradStudent::setStudentId(int idIn) {
    Student::setId(idIn);
}
int GradStudent::getStudentId() {
    return Student::getId();
}