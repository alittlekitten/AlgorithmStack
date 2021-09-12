#include <iostream>

using namespace std;

int main(void) {
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n-i-1; ++j) { // 공백은 n-i-1개 찍어야함
			cout << ' ';
		}
		for (int j = 0; j <= i; ++j) { // 별은 i+1개 찍어야함
			cout << '*';
		}
		if (i != n-1) cout << endl;
	}

	return 0;
}
