#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34749 A healthy menu
	// 수학
	int n, m, g;
	cin >> n >> m;

	int arr[1001] = { 0 };

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> g;
			if (g > arr[j]) arr[j] = g;
		}
	}

	int ans = 0;
	for (int i = 0; i < m; ++i) {
		if (arr[i] != 0) ans += arr[i];
		else ++ans;
	}

	cout << ans;

	return 0;
}
