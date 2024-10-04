#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i = 0;

    while(1)
    {
        cin >> n;
        if (n < 30)
            sum = sum + n;
        if (n >= 30)
            break ;
        i ++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (float) sum / (float)i;
    return 0;
}