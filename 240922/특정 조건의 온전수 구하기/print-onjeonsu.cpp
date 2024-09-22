#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;

    cin >> n;
    while(i++ < n)
    {
        if (i % 2 == 0)
            continue;
        if (i % 10 == 5)
            continue;
        if (i % 3 == 0 && i % 9 != 0)
            continue;
        cout << i << " ";
    }
    return 0;
}