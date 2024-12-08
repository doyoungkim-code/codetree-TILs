
#include <iostream>
using namespace std;

int main() {

	int arr[10];

    for (int i = 0; i < 10; i ++)
    {
        cin >> arr[i];
    }
	for (int i = 1; i < 7; i++) {
		int cnt = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[j] == i) {
				cnt++;
			}
		}
		cout << i << " - " << cnt << endl;
	}

	return 0;

}


