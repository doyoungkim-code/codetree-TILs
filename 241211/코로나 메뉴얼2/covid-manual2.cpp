#include <iostream>
using namespace std;

int main() {
    char status[3];
    int degree[3];
    int where_hospital[4] = {0, 0, 0, 0};

    for (int i = 0; i < 3; i ++)
    {
        cin >> status[i];
        cin >> degree[i];
        if (status[i] == 'Y' && degree[i] >= 37)
            where_hospital[0] ++;
        else if (status[i] == 'N' && degree[i] >= 37)
            where_hospital[1] ++;
        else if (status[i] == 'Y' && degree[i] < 37)
            where_hospital[2] ++;
        else
            where_hospital[3] ++;
    }
    for (int i = 0; i < 4; i ++)
    {
        cout << where_hospital[i] << " ";
    }
    if (where_hospital[0] >= 2)
        cout << "E";
    return 0;
}