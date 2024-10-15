#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int i = 0;
    int j;
    cin >> n >> m;
    while(i < n)
    {
        j = 0;
        while(j < m)
        {
            cout << "* ";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}