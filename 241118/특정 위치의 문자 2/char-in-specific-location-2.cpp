#include <iostream>
using namespace std;

int main() {
    char n[10];

    for(int i = 0; i < 10; i ++)
    {
        cin >> n[i];
        if (i == 1 || i == 4 || i == 7)
        {
            cout << n[i] << " ";
        }
    }
    return 0;
}