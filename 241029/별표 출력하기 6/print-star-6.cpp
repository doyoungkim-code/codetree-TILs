#include <iostream>
using namespace std;

int main() {
    int n;
    int j;
    int i = 0;

    cin >> n;
    while(i < n)
    {
        j = 0;
        while(j < i)
        {
            cout << "  ";
            j ++;
        }
        j = 0;
        while(j < n * 2 - 1 - (i * 2))
        {
            cout << "* ";
            j ++;
        }
        cout << endl;
        i ++;
    }
    i = 1;
    while(i < n)
    {
        j = 0;
        while(j < n - i - 1)
        {
            cout << "  ";
            j ++;
        }
        j = 0;
        while(j < (2 * i) + 1)
        {
            cout << "* ";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}