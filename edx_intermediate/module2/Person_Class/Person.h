#include <string>

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

        void sayHello();
};