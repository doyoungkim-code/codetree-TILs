#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0)
    {
        while(b)
        {
            cout << a;
            b--;
        }
    }
    else
        cout << '0';
    return 0;
}