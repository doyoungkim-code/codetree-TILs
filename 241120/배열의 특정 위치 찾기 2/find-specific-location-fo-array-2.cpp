#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum_a = 0;
    int sum_b = 0;

    for(int i = 0; i < 10; i ++)
    {
        cin >> n[i];
        if(i % 2 == 0)
        {
            sum_a += n[i];
        }
        else
            sum_b += n[i];
    }
    if (sum_a >= sum_b)
        cout << sum_a - sum_b;
    else
        cout << sum_b - sum_a;
    return 0;
}