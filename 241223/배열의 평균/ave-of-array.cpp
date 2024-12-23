#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    float sum_a[2] = {0, 0};
    float sum_b[4] = {0, 0, 0, 0};
    float sum_c = 0;

    for(int i = 0; i < 2; i ++)
    {
        for (int j = 0; j < 4; j ++)
        {
            cin >> arr[i][j];
            sum_c = sum_c + arr[i][j];
        }
    }
    for (int i = 0; i < 4; i ++)
    {
        sum_a[0] = sum_a[0] + arr[0][i];
        sum_a[1] = sum_a[1] + arr[1][i];
    }
    cout.precision(1);
    cout << fixed;
    cout << sum_a[0] / 4 << " ";
    cout << sum_a[1] / 4 << endl;
    for (int i = 0; i < 2; i ++)
    {
        sum_b[0] = sum_b[0] + arr[i][0];
        sum_b[1] = sum_b[1] + arr[i][1];
        sum_b[2] = sum_b[2] + arr[i][2];
        sum_b[3] = sum_b[3] + arr[i][3];
    }
    cout << sum_b[0] / 2 << " ";
    cout << sum_b[1] / 2 << " ";
    cout << sum_b[2] / 2 << " ";
    cout << sum_b[3] / 2 << endl;
    cout << sum_c / 8;
    return 0;
}