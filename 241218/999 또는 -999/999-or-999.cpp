#include <iostream>
using namespace std;

int main() {
    int num[100];
    int max = -999;
    int min = 999;

    for (int i = 0; i < 100; i ++)
    {
        cin >> num[i];
        if (num[i] == 999 || num[i] == -999)
        {
            break;
        }
    }
    for (int i = 0; i < 100; i ++)
    {
        if (max < num[i] && num[i] != 999)
            max = num[i];
        if (min > num[i] && num[i] != -999)
            min = num[i];
        if (num[i] == 999 || num[i] == -999)
        {
            break;
        }
    }
    cout << max << " " << min;
    return 0;
}