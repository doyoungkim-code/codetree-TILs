#include <iostream>
using namespace std;

int main() {
    int n;
    int a;
    int i = 0;
    int sum = 0;

    cin >> n;
    while(i < n)
    {
        cin >> a;
        sum = sum + a;
        i ++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / (double)n;
    return 0;
}