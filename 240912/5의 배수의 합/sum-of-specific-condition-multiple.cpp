#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    sum = 0;

    cin >> a >> b;
    if(a <= b)
    {
        while(a <= b)
        {
            if(a % 5 == 0)
                sum = sum + a;
            a ++;
        }
    }
    else if(b < a)
    {
        while(b <= a)
        {
            if(b % 5 == 0)
                sum = sum + b;
            b ++;
        }
    }
    cout << sum;
    return 0;
}