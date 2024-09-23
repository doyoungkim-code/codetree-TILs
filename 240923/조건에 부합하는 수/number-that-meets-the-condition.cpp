#include <iostream>
using namespace std;

int main() {
    int a;
    int i = 0;

    cin >> a;
    while(i++ <= a)
    {
        if(i % 2 == 0 && i % 4 != 0)
            continue ;
        if((i % 8) % 2 == 0)
            continue ;
        if (i % 7 < 4)
            continue ;
        cout << i << " ";
    }
    return 0;
}