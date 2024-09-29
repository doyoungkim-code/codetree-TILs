#include <iostream>
using namespace std;

int main() {
    int a;
    while(1)
    {
        cin >> a;
        
        if (a < 25)
            cout << "Higher" << endl;
        else if (a > 25)
            cout << "Lower" << endl;
        else
        {
            cout << "Good";
            break;
        }
    }
    return 0;
}