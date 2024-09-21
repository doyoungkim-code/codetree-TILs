#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0;
    int i = 1;
    cin >> n;
    while(i <= n)
    {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            i ++;
            continue;
        }
        a ++;
        i ++;
    }
    cout << a;
    return 0;
}