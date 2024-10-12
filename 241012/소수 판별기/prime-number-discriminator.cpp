#include <iostream>
using namespace std;

int main() {
    int a;
    int i = 2;
    bool b = true;
    
    cin >> a;
    while(i < a)
    {
        if (a % i == 0)
            b = false;
        i ++;
    }
    if(b)
        cout << "P";
    else
        cout << "C";
    return 0;
}