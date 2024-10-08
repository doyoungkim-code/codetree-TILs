#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    bool c = false;
    cin >> a >> b >> c;
    while(a <= b)
    {
        if(a % c == 0)
            c = true;
        a++;
    }
    if (c == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}