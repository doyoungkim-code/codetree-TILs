#include <iostream>
using namespace std;

int main() {
    int a, b, k, sum;
    double e;
    
    sum = 0;
    k = 0;
    cin >> a >> b;
    while(a <= b)
    {
        if(a % 5 == 0 || a % 7 == 0)
        {
            sum = sum + a;
            k ++;
        }
        a++;
    }
    e = (double)sum / (double)k;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << e;
    return 0;
}