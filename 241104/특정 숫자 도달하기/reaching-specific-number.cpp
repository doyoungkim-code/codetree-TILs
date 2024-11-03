#include <iostream>
using namespace std;

int main() {
    int a[10];
    int sum = 0;
    float e;
    
    for(int i = 0; i < 10; i ++)
    {
        cin >> a[i];
        if (a[i] >= 250)
        {
            break ;
        }
        else
        {
            sum = sum + a[i];
        }
    }
    e = sum / i;
    cout << sum;
    cout << " ";
    cout.precision(2);
    cout << e;
    return 0;
}