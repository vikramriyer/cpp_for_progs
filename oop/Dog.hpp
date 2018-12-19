#include <iostream>

class Dog 
{
    std::string name;
    std::string licenseNumber;
public:
    void setName(std::string nameIn);
    void setLicenseNumber(std::string licenseNumberIn);
    std::string getName();
    std::string getLicenseNumber();
    void printInfo();
};

void Dog::setName(std::string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(std::string licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

std::string Dog::getName()
{
    return name;
}

std::string Dog::getLicenseNumber()
{
    return licenseNumber;
}
 
void Dog::printInfo()
{
    std::cout << name << ' ' << licenseNumber << std::endl;
}