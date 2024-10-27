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
        j = n - 1 - i;
        while(j > 0)
        {
            cout << "  ";
            j --;
        }
        k = 0;
        while(k < i * 2 + 1)
        {
            cout << "* ";
            k ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}