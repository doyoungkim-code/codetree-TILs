#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;
    int j;
    int n_copy;

    cin >> n;
    n_copy = n;
    while(i < n)
    {
        j = 0;
        while(j < i)
        {
            cout << "  ";
            j ++;
        }
        j = 0;
        while(j < 2 * n_copy - 1)
        {
            cout << "* ";
            j ++;
        }
        cout << endl;
        i ++;
        n_copy --;
    }
    return 0;
}