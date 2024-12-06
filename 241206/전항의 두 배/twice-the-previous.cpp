#include <iostream>
using namespace std;

int main() {
    int a[10];

    cin >> a[0];
    cin >> a[1];
    cout << a[0] << " " << a[1] << " ";
    for(int i = 2; i < 10; i ++)
    {
        a[i] = a[i - 1] + 2 * a[i - 2];
        cout << a[i] << " ";
    }
    return 0;
}