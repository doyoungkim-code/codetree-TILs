#include <iostream>
using namespace std;

int main() {
    int n[5];
    int i = 0;
    bool b = true;

    while(i < 5)
    {
        cin >> n[i];
        if(n[i] % 3 != 0)
            b = false;
        i ++;
    }
    if (b)
        cout << "1";
    else
        cout << "0";
    return 0;
}