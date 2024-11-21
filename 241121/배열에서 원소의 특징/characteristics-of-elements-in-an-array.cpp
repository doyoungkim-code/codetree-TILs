#include <iostream>
using namespace std;

int main() {
    int n[10];
    int i;

    for (i = 0; i < 10; i ++)
    {
        cin >> n[i];
        if (n[i] % 3 == 0)
            break;
    }
    cout << n[i - 1];
    return 0;
}