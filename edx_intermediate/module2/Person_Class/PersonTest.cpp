#include <iostream>
#include "Person.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // Person *person = new Person("Vikram", "Iyer", 27);
    // person->sayHello();
    Person p;
    std::cout << p.getFirstName() << std::endl;
    return 0;
}
