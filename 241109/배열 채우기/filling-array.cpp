#include <iostream>
using namespace std;

int main() {
    int num[10];
    int i;

    for(i = 0; i < 10; i ++)
    {
        cin >> num[i];
        if (num[i] == 0)
        {
            break;
        }        
    }
    for(int j = i - 1; j >= 0; j--)
    {
        cout << num[j] << " ";
    } 
    return 0;
}