#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool k = false;

    cin >> a >> b;
    while(a <= b)
    {
        if (1920 % a == 0 && 2880 % a == 0)
            k = true;
        a ++;
    }
    if (k)
        cout << "1";
    else
        cout << "0";
    return 0;
}