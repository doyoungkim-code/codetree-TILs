#include <iostream>
using namespace std;

int main() {
    int val, sum;
    sum = 0;
    for (int i=0; i < 10; i++)
    {
        cin >> val;
        sum += val;
    }
    cout << sum;
    return 0;
}