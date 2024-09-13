#include <iostream>
using namespace std;

int main() {
    int a;
    int i = 0;
    int sum = 0;
    int k = 0;

    while(i < 10)
    {
        cin >> a;
        if(a >= 0 && a <= 200)
        {
            sum = sum + a;
            k ++;
        }
        i ++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << ((double) sum / (double)k);
    return 0;
}