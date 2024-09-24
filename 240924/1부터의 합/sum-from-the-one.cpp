#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i = 1;

    cin >> n;
    while(i <= 100)
    {
        sum = sum + i;
        if(sum >= n)
            break ;
        i ++;
    }
    cout << i;
    return 0;
}