#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int k = 0;
    int sum = 0;

    for(i = 0; i < 10; i++)
    {
        cin >> n;
        if (n != 0 && n % 2 == 0)
        {
            sum = sum + n;
            k ++;
        }
        if(n == 0)
            break;
    }
    cout << k << " " << sum;
    return 0;
}