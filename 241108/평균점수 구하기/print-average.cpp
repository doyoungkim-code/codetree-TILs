#include <iostream>
using namespace std;

int main() {
    float num[8];
    float sum = 0;
    float e;

    for (int i=0; i < 8; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    e = sum / 8;
    cout.precision(1);
    cout << fixed;
    cout << e;
    return 0;
}