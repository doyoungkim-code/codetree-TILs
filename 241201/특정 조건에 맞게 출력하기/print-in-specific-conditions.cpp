#include <iostream>
using namespace std;

int main() {
    int n[100];

    for(int i = 0; i < 100; i ++)
    {
        cin >> n[i];
        if (n[i] == 0)
            break;
    }
    for(int i = 0; i < 100; i ++)
    {
        if (n[i] == 0)
            break;
        if (n[i] % 2 == 0)
            cout << n[i] / 2 << " ";
        else
            cout << n[i] + 3 << " ";
    }
    return 0;
}