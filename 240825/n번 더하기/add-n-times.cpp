#include <iostream>
using namespace std;

int main() {
    int a;
    int n;
    int i;
    cin >> a >> n;
    
    i = n;
    while(i)
    {
        a = a + n;
        i --;
        cout << a << endl;
    }
    return 0;
}