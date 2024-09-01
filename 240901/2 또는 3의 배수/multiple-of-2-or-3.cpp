#include <iostream>
using namespace std;

int main() {
    int i, n;

    i = 1;
    cin >> n;
    while(i <= n)
    {
        if (i % 2 == 0 || i % 3 == 0)
            cout << "1 ";
        else
            cout << "0 ";
        i ++;
    }
    return 0;
}