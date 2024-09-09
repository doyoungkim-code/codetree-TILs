#include <iostream>
using namespace std;

int main() {
    int num;
    int k;
    int sum = 0;

    cin >> num;
    while(num)
    {
        cin >> k;
        if (k % 3 == 0 && k % 2 == 1)
            sum = sum + k;
        num --;
    }
    cout << sum;
    return 0;
}