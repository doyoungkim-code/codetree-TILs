#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    char c;

    while(1)
    {
        cin >> a >> b >> c;
        cout << a * b << endl;
        if(c == 'C')
            break;
    }
    return 0;
}