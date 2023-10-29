#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14720 우유 축제
	// 그리디
	int n;
	cin >> n;
	int m[1000] = { 0 };
	int maxValue = 0;
	int c = 0;

	for (int i = 0; i < n; ++i) {
		cin >> m[i];
	}
	for (int j = 0; j < n; j++) {
		if (m[j] == 0 && c == 0) {
			++maxValue;
			c = 1;
		}
		if (m[j] == 1 && c == 1) {
			++maxValue;
			c = 2;
		}
		if (m[j] == 2 && c == 2) {
			++maxValue;
			c = 0;
		}
	}

	cout << maxValue;

	return 0;
}
