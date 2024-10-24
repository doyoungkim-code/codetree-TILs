#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;
    int j;

    cin >> n;
    while(i < n - 1)
    {
        j = 0;
        while(j <= i)
        {
            cout << "*";
            j ++;
        }
        cout << "\n\n";
        i ++;
    }
    i = 0;
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            cout << "*";
            j ++;
        }
        cout << "\n\n";
        n --;
    }
    return 0;
}