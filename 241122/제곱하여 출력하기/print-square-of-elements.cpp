#include <iostream>
using namespace std;

int main() {
    int n;
    int k;
    
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> k;
        cout << k * k << " ";
    }
    return 0;
}