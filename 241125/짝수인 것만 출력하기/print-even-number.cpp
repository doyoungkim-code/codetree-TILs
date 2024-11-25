#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int k[n];
    for (int i = 0; i < n; i ++)
    {
        cin >> k[i];
    }
    for (int i = 0; i < n; i ++)
    {
        if (k[i] % 2 == 0)
        {
            cout << k[i] << " ";
        }
    }
    return 0;
}