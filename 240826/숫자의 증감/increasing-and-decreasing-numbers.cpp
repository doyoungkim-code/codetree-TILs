#include <iostream>
using namespace std;

int main() {
    char c;
    int n;
    int i = 1;

    cin >> c >> n;
    if(c == 'A')
    {
        while(i <= n)
        {
            cout << i << " ";
            i ++;
        }
    }
    else if (c == 'D')
    {
        while(n)
        {
            cout << n << " ";
            n --;
        }
    }
    return 0;
}