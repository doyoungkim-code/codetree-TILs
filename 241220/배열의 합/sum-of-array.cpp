#include <iostream>
using namespace std;

int main() {

	int arr_2d[4][4];
    int sum;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr_2d[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
        sum = 0;
		for (int j = 0; j < 4; j++) {
            sum = sum + arr_2d[i][j];
		}
        cout << sum;
		cout << endl;
	}

	return 0;

}
