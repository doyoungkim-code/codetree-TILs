#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int i = 1;
    while(i <= a)
    {
        if (i % 3 == 0)
            cout << i << " ";
        i ++;
    }
    return 0;
}