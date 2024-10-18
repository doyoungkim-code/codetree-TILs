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
        while(j < i)
        {
            cout << "* ";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}