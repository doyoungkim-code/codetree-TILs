#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        while(a >= b)
        {
            cout << a << " ";
            a --;
        }
    }
    else if (a < b)
    {
        while(a <= b)
        {
            cout << b << " ";
            b --;
        }
    }
    return 0;
}