#include <iostream>
using namespace std;

int main() {
    int i, n;
    int nums[10];
    cin >> n;
    i = 0;
    while(i < n)
    {
        cin >> nums[i];
        i ++;
    }
    i = 0;
    while(i < n)
    {
        if (nums[i] % 2 == 1 && nums[i] % 3 == 0)
        cout << nums[i] << endl;
        i ++;
    }
    return 0;
}