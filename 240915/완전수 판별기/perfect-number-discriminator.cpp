#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i = 1;
    cin >> n;
    while(i < n)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
        i ++;
    }
    if (sum == n)
        cout << "P";
    else
        cout << "N";
    return 0;
}