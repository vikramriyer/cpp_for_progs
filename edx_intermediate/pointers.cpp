#include <iostream>

int main()
{
    // simple pointers
    int num = 10;
    int *p = &num;
    std::cout << num << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = 9;
    std::cout << num << std::endl;
    std::cout << std::endl;

    // reference types
    int num2 = 1;
    int &ref2 = num2;
    std::cout << num2 << std::endl;
    std::cout << ref2 << std::endl;
    ref2 = 2;
    std::cout << num2 << std::endl;
    std::cout << ref2 << std::endl;

    std::cout << &ref2 << std::endl;
    std::cout << &num2 << std::endl;

    return 0;
}
