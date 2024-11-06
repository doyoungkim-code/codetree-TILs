#include <iostream>
using namespace std;

int main() {
    int n[10];
    int len = 0;
    int sum = 0;

    for (int i=0; i < 10; i ++)
    {
        cin >> n[i];
        if(250 <= n[i])
            break ;
        sum = sum + n[i];
        len = i + 1;
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (float)sum / (float)len;
    return 0;
}