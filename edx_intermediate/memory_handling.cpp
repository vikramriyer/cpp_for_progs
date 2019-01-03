#include <iostream>

int main()
{
    /*
    * There is a rule when initializing pointers
    * - never keep it null
    * ex: int *p; // incorrect
    * ex: int *p = num; // This is correct
    * 
    * We can also use something like this if we do not want to enter values
    * int *p = new int; // memory allocated
    *
    *  But we need to free it to avoid memory leaks
    * delete p;
    */


    int num = 10;
    int *pInt = &num;
    double *pDouble = new double;
    int *pInt2 = new int;
    *pDouble = 12.0;
    *pInt2 = 1;

    std::cout << pInt << *pInt << std::endl << pDouble << ":" << *pDouble;
    std::cout << std::endl;
    printf("%p %s %d, \n%p %s %f\n", pInt, ":", *pInt, pDouble, ":", *pDouble);
    printf("%p %s %d", pInt2, ":", *pInt2); 
    std::cout << std::endl;

    std::cout << sizeof(pInt) << std::endl;
    std::cout << sizeof(pInt2) << std::endl;
    std::cout << sizeof(pDouble);

    std::cout << std::endl;
    // delete pInt;
    delete pInt2;
    delete pDouble;

    return 0;
}
