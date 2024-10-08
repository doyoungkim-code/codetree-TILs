#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    bool q = false;
    cin >> a >> b >> c;
    while(a <= b)
    {
        if(a % c == 0)
            q = true;
        a++;
    }
    if (q == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}