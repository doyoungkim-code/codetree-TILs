#include <iostream>
using namespace std;

int main() {
    int i;
    int c;
    int k;

    i = 10;
    k = 0;
    while(i)
    {
        cin >> c;
        if (c % 2 == 1)
            k ++;
        i --;
    }
    cout << k;
    return 0;
}