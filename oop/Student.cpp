#include <iostream>

class Student
{
        std::string name;
        int id;
        int gradDate;
    public:
        void setName(std::string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        std::string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student::setName(std::string nameIn) {
    name = nameIn;
}
void Student::setId(int idIn) {
    id = idIn;
}
void Student::setGradDate(int dateIn) {
    gradDate = dateIn;
}
std::string Student::getName() {
    return name;
}
int Student::getId() {
    return id;
}
int Student::getGradDate() {
    return gradDate;
}

void Student::print()
{
     std::cout << name << " " << id << " " << gradDate << std::endl;
}

int main()
{
    Student student1;

    student1.setName("Vikram Iyer");
    student1.setId(1);
    student1.setGradDate(2013);
    student1.print();

    return 0;
}
