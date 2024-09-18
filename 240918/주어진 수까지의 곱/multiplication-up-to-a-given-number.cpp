#include <iostream>
using namespace std;

int main() {
    int a, b;
    int prod = 1;

    cin >> a >> b;
    while(a <= b)
    {
        prod = prod * a;
        a ++;
    }
    cout << prod;
    return 0;
}