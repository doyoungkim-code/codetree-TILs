
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
	int arr[n];
    int nums[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    for (int i = 1; i < 10; i++){
        for (int j = 0; j < n; j++){
            if(i == arr[j])
                nums[i - 1] ++;
        }
    }
    for (int i = 0; i < 9; i ++){
        cout << nums[i] << endl;
    }

	return 0;

}