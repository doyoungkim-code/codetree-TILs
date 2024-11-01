#include <iostream>
using namespace std;

int main() {
    int i;
    char c[10];

    for(i = 0; i < 10; i ++)
    {
        cin >> c[i];
    }
    for(i = 9; i >= 0; i --)
    {
        cout << c[i];
    }
    return 0;
}