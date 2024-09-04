#include <iostream>
using namespace std;

int main() {
    int n;
    int a;
    int c1;
    int c2;

    n = 10;
    c1 = 0;
    c2 = 0;
    while(n)
    {
        cin >> a;
        if (a % 3 == 0 && a % 5 == 0)
        {
            c1 ++;
            c2 ++;
        }
        else if(a % 3 == 0)
            c1 ++;
        else if (a % 5 == 0)
            c2 ++;
        n --;
    }
    cout << c1 << " " << c2;
    return 0;
}