
#include <iostream>
using namespace std;

int main() {

    int n;
    int k = 0;

    cin >> n;
	int arr[n];
	int min_val = 2147483647;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	for (int i = 0; i < n; i++) {
		if (min_val > arr[i])
			min_val = arr[i];
	}
	for (int i = 0; i < n; i++) {
        if (arr[i] == min_val)
            k ++;
    }
    cout << min_val << " " << k;
	return 0;

}