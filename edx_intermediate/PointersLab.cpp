#include <iostream>

void PassByValue(int num);
void PassByRef(int *num);

int main(int argc, char const *argv[])
{
    int num1;
    int *pNum;

    num1 = 3;
    *pNum = 5;

    PassByValue(num1);
    std::cout << num1 << std::endl;

    PassByRef(pNum);
    std::cout << *pNum << std::endl;

    return 0;
}

void PassByValue(int num) {
    std::cout << "I am inside PassByValue" << std::endl;
    num = 10;
    std::cout << num << std::endl;
}

void PassByRef(int *num) {
    std::cout << "I am inside PassByRef" << std::endl;
    *num = 50;
    std::cout << *num << std::endl;
}