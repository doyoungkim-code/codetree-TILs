#include <iostream>
using namespace std;

int main() {
    int a;
    int sum;

    sum = 0;
    cin >> a;
    while(a <= 100)
    {
        sum = sum + a;
        a ++;
    }
    cout << sum;
    return 0;
}