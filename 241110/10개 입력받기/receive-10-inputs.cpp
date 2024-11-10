#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i;

    for(i = 0; i < 10; i ++)
    {
        cin >> n;
        sum = sum + n;
        if(n == 0)
            break;
    }
    cout << sum << " ";
    cout.precision(1);
    cout << fixed;
    cout << (float)sum / (float)(i);
    return 0;
}