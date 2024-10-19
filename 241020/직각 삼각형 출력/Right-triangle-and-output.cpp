#include <iostream>
using namespace std;

int main() {
    int n;
    int j;
    int i = 1;

    cin >> n;
    while(i <= n)
    {
        j = 0;
        while(j < i * 2 - 1)
        {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}