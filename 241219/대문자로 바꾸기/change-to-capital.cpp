#include <iostream>
using namespace std;

int main() {
    char c;

    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            cin >> c;
            cout << char(c - 32) << " ";
        }
        cout << endl;
    }
    return 0;
}