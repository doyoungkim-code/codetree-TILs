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
        while(j < n)
        {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}