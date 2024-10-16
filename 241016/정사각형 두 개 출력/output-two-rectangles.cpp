#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int j;
    int k = 0;

    cin >> n;
    while(k < 2)
    {
        i = 0;
        while(i < n)
        {
            j = 0;
            while(j < n)
            {
                cout << "*";
                j ++;
            }
            cout << endl;
            i ++;
        }
        cout << endl;
        k ++;
    }
    return 0;
}