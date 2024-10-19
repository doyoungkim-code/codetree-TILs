#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;
    int j;
    int k;

    cin >> n;
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            k = 0;
            while(k < n)
            {
                cout << "*";
                k ++;
            }
            cout << " ";
            j ++;
        }
        cout << endl;
        n --;
    }
    return 0;
}