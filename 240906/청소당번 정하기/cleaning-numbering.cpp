#include <iostream>
using namespace std;

int main() {
    int a;
    int i = 0;
    int gyo = 0;
    int bok = 0;
    int hwa = 0;

    cin >> a;
    while(i <= a)
    {
        if (i == 0)
        {
            i ++;
            continue ;
        }
        if(i % 12 == 0)
            hwa ++;
        else if(i % 3 == 0)
            bok ++;
        else if(i % 2 == 0)
            gyo ++;
        i ++;
    }
    cout << gyo << " " << bok << " " << hwa;
    return 0;
}