#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << INT_MAX << endl;
    cout << sizeof(INT_MAX) << endl;
    return 0;
}

// Unsigned int => we can store a bigger number as there is a bit free as no sign is going to be stored
// Signed int => a smaller number is stored as 1 bit is reserved for sign (+,-)