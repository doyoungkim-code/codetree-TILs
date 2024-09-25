#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int sum = 1;

    cin >> n;
    while(i <= 10)
    {
        sum = sum * i;
        if(sum >= n)
            break;
        i ++;
    }
    cout << i;
    return 0;
}