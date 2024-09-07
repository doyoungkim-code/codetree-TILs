#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum;

    sum = 0;
    cin >> a >> b;
    while(a <= b)
    {
        sum = sum + a;
        a ++;
    }
    cout << sum;
    return 0;
}