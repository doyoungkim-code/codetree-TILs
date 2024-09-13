#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;

    cin >> a >> b;
    while(a <= b)
    {
        if(a % 2 == 0)
        {
            sum = sum + a;
        }
        a ++;
    }
    cout << sum;
    return 0;
}