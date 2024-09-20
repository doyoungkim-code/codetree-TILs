#include <iostream>
using namespace std;

int main() {
    int a, b;
    int prod = 1;
    cin >> a >> b;
    while (b)
    {
        prod = prod * a;
        b --;
    }
    cout << prod;
    return 0;
}