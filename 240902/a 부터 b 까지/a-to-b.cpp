#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while(a <= b)
    {
        cout << a << " ";
        if(a % 2 == 1)
            a = a * 2;
        else
            a = a + 3;
    }
    return 0;
}