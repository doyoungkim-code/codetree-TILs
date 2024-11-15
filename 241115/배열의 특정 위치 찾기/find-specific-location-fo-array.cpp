#include <iostream>
using namespace std;

int main() {

	int arr[10];
    int sum = 0;
    int sum_t = 0;
    int k = 0;

	for (int i = 0; i < 10; i ++) {
		cin >> arr[i];
        if (i % 2 == 1)
        {
            sum = sum + arr[i];
        }
        if (i % 3 == 2)
        {
            sum_t = sum_t + arr[i];
            k ++;
        }
	}
    cout << sum << " ";
    cout.precision(1);
    cout << fixed;
    cout << (float)sum_t / (float)k;
	return 0;

}