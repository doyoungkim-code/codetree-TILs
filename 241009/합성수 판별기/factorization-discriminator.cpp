#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 2;
    bool c_or_n = false;

    cin >> n;
    while(i < n)
    {
        if(n % i == 0)
            c_or_n = true;
        i ++;
    }
    if(c_or_n)
        cout << "C";
    else
        cout << "N";
    return 0;
}