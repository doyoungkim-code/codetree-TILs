
#include <iostream>
using namespace std;

int main() {

    int n, m;
    int cnt = 0;

    cin >> n;
    cin >> m;
    int num[n];
	for (int i = 0; i < n; i++) {
        cin >> num[i];
		if (num[i] == m) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;

}