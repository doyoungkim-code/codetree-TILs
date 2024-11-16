#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    
    for(int i = 0; i < 100; i ++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            n = i;
            break;
        }
    }
    cout << a[n - 1] + a[n - 2] + a[n - 3];

    return 0;
}