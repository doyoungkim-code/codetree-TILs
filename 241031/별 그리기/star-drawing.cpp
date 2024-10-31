#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;
    int j;

    cin >> n;
    while(i < n)
    {
        j = 0;
        while(j < n - i - 1)
        {
            cout << " ";
            j ++;
        }
        j = 0;
        while(j < 2 * i + 1)
        {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    i = 0;
    while(i < n - 1)
    {
        j = 0;
        while(j < i + 1)
        {
            cout << " ";
            j ++;
        }
        j = 0;
        while(j < (2 * n) - (2 * i) - 3)
        {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}