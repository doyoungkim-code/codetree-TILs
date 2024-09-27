#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;

    cin >> n;
    while(1)
    {
        if (n / i <= 1)
            break ;
        n = n / i;
        i ++;
    }
    cout << i;
    return 0;
}