#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;
    while(a >= b)
    {
        if (a % 2 == 0)
            cout << a << " ";
        a--;
    }
    return 0;
}