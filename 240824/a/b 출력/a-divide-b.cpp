#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int i = 20;

    cin >> a >> b;
    cout << a / b << ".";
    a = a % b;
    while(i--)
    {
        a = a * 10;
        cout << a / b;
        a = a % b;
    }
    return 0;
}