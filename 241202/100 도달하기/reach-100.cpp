#include <iostream>
using namespace std;

int main() {
    int n;
    int k[100];
    
    cin >> n;
    k[0] = 1;
    k[1] = n;
    for (int i=0; i < 101; i ++)
    {
        if(i == 0)
            cout << k[0] << " ";
        else if(i == 1)
            cout << k[1] << " ";
        else
        {
            k[i] = k[i - 1] + k[i - 2];
            
            cout << k[i] << " ";
            if(k[i] >= 100)
                break;
        }
    }
    return 0;
}