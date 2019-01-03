#include <iostream>

class Person {
    private:
        std::string firstName;
        std::string lastName;
        int age;
    public:
        Person();
        Person(std::string firstName_in, std::string lastName_in);
        Person(std::string firstName_in, std::string lastName_in, int age_in);

        ~Person();

        void setFirstName(std::string firstName_in);
        std::string getFirstName();

        void setLastName(std::string lastName_in);
        std::string getLastName();

        void setAge(int age_in);
        int getAge();
};

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

Person::~Person(){
    std::cout << "Destructor called." << std::endl;
}

int main()
{
    Person *person = new Person("Vikram", "Iyer", 27);
    // person.setFirstName("Vikram");
    // person.setLastName("Iyer");
    // person.setAge(27);

    std::cout << person->getFirstName() << std::endl;
    std::cout << person->getLastName() << std::endl;
    std::cout << person->getAge() << std::endl;

    delete person;
    return 0;
}
