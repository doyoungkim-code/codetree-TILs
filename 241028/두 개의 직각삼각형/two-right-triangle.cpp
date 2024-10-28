#include <iostream>
using namespace std;

int main() {
    int n;
    int line = 0;
    int i;

    cin >> n;
    while(line < n)
    {
        i = 0;
        while(i < n - line)
        {
            cout << "*";
            i ++;
        }
        i = 0;
        while(i < line * 2)
        {
            cout << " ";
            i ++;
        }
        i = 0;
        while(i < n - line)
        {
            cout << "*";
            i ++; 
        }
        cout << endl;
        line ++;
    }
    return 0;
}