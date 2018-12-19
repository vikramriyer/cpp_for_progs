/*Goal: study a simple example if inheritance. 
*/
#include "Inheritance.hpp"

int main()
{
    //Create an instance of the derived class, 
    //GradStudent
    GradStudent gs1;
    
    //Set the id of the grad student
    //using the function in the base class
    gs1.setStudentId(123456789);
    
    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");
    
    std::cout<<gs1.getStudentId() <<" "<<gs1.getDegree() << std::endl;
    return 0;
}