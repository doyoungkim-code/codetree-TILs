#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;

    cin >> n;
    while(i < n)
    {
        while(n - i)
        {
            cout << "* ";
            i ++;
        }
        cout << endl;
        i = 0;
        n --;
    }
    return 0;
}