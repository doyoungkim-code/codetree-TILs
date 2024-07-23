#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int b = 13;
    double a = 0.165;

    cout.precision(6);
    cout << a << " * "<< b << " = "<< a * b << endl;
    return 0;
}