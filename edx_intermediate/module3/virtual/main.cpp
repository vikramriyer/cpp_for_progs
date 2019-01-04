#include "Student.h"

void demo1(Person * p);
void demo2(Person & p);

int main()
{
    Person * p = new Student("Vikram Iyer", 27, "AI");

    p->display();
    
    demo1(p);
    demo2(*p);

    return 0;
}

void demo1(Person * p){
    p->display();
}

void demo2(Person & p){
    p.display();
}