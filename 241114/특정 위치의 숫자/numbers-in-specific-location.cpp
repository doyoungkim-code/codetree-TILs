#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum;

    for(int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }
    sum = n[2] + n[4] + n[9];
    cout << sum;
    return 0;
}