
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int k = 0;
    cin >> n;
    cin >> m;
	int arr_2d[n][m] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			k ++;
            cout << k << " ";
		}
		cout << endl;
	}

	return 0;

}