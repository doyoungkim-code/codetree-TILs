#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool k = true;

    cin >> a >> b >> c;
    while(a <= b)
    {
        if(a % c == 0)
            k = false;
        a ++;
    }
    if (k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}