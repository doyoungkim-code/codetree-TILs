#include <iostream>
using namespace std;

int main() {
    int n;
    double grade;
    double sum = 0;
    double e;
    
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> grade;
        sum = sum + grade;
    }
    e = sum / (double) n;
    cout.precision(1);
    cout << fixed;
    cout << e << endl;
    if(4.0 <= e)
    {
        cout << "Perfect";
    }
    else if(3.0 <= e)
    {
        cout << "Good";
    }
    else
    {
        cout << "Poor";
    }
    return 0;
}