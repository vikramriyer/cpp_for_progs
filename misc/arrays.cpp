#include <iostream>

using namespace std;

int main()
{
    double array[3];
    array[0] = 1.1;
    array[1] = 2;
    array[2] = 3;
    cout << sizeof(array) << endl;
    cout << sizeof(array[0]) << endl;
    cout << sizeof(array)/sizeof(*array) << endl;
    for (int i = 0; i < sizeof(array)/sizeof(*array); ++i) {
        cout << array[i] << ' ';
    }
    cout << endl << endl;

    int twoD[2][2];
    twoD[0][0] = 1;
    twoD[0][1] = 0;
    twoD[1][0] = 0;
    twoD[1][1] = 1;
    
    for (int i = 0; i < sizeof(twoD)/sizeof(twoD[0]); ++i) {
        for (int j = 0; j < sizeof(twoD[0])/sizeof(int); ++j) {
            cout << twoD[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
