#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int i;
    int prod = 1;

    cin >> a >> b;
    i = a;
    while(i <= b)
    {
        if (i % a == 0)
            prod = prod * i;
        i ++;
    }
    cout << prod;
    return 0;
}