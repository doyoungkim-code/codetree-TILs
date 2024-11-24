#include <iostream>
using namespace std;

int main() {
    int a[10];

    for(int i = 0; i < 10; i ++)
    {
        if (i == 0)
            cin >> a[0];
        else if (i == 1)
            cin >> a[1];
        else
            a[i] = (a[i - 1] + a[i - 2]) % 10;

        cout << a[i] << " ";
    }
    return 0;
}