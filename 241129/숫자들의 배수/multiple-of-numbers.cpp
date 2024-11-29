#include <iostream>
using namespace std;

int main() {
    int n;
    int k = 0;

    cin >> n;
    for (int i = 1; i < 100; i ++)
    {
        cout << n * i << " ";
        if (n * i % 5 == 0)
        {
            k ++;
        }
        if (k == 2)
            break;
    }
    return 0;
}