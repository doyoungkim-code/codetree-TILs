#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a >> b;
    if (a.length() > b.length())
        cout << a << " " << a.length();
    else if (a.length() < b.length())
        cout << b << " " << b.length();
    else
        cout << "same";
    return 0;
}