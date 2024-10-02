#include <iostream>
using namespace std;

int main() {
    int a;
    int i = 3;

    while(i)
    {
        cin >> a;
        if(a % 2 == 1)
            continue ;
        else
        {
            cout << a / 2 << endl;
        }
        i --;
    }
    return 0;
}