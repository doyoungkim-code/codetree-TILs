#include <iostream>
using namespace std;

int main() {
    int n[100];
    int k[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 100; i ++)
    {
        cin >> n[i];
        if (n[i] == 0)
            break;
    }
    for(int i = 0; i < 100; i ++)
    {
        if (n[i] == 0)
            break;
        if (n[i] / 10 == 0)
            continue;
        k[(n[i] / 10) - 1] ++;
    }
    for(int i = 9; i >= 0; i --)
    {
        cout << (i + 1) * 10 << " - " << k[i] << endl;
    }
    return 0;
}