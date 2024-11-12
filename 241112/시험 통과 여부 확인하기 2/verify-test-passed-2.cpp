#include <iostream>
using namespace std;

int main() {
    int n;
    int ex;
    int sum;
    float ee;
    int pass = 0;

    cin >> n;
    for (int i=0; i < n; i ++)
    {
        sum = 0;
        cin >> ex;
        sum = sum + ex;
        cin >> ex;
        sum = sum + ex;
        cin >> ex;
        sum = sum + ex;
        cin >> ex;
        sum = sum + ex;
        ee = (float) sum / (float) 4;
        if (ee >= 60)
        {
            pass ++;
            cout << "pass" << endl;
        }
        else
            cout << "fail" << endl;
    }
    cout << pass;
    return 0;
}