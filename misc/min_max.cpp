#include <iostream>

using namespace std;

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    int temp;
    int avg = 0;

    for (int i = 0; i < 15; ++i) {
        cin >> temp;
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
        avg += temp;
    }

    avg = avg / 15;
    
    cout << min << endl;
    cout << max << endl;
    cout << avg << endl;
    return 0;
}
