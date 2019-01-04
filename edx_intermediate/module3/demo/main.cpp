#include "Student.h"

int main(int argc, char const *argv[])
{
    Student student1;
    student1.displayNameAge();
    student1.displayCourse();

    Student student2("Vikram Iyer", 27, "AI");
    student2.displayNameAge();
    student2.displayCourse();
    
    return 0;
}
