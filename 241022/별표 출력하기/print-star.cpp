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
            cout << "* ";
            j ++;
        }
        cout << endl;
        i ++;
    }
    i = 0;
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            cout << "* ";
            j ++;
        }
        cout << endl;
        n --;
    }
    return 0;
}