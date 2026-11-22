#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10163 색종이
	// 구현
	int n;
	int arr[1001][1001] = { 0 };
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		int x, y, w, h;
		cin >> x >> y >> w >> h;

		for (int j = x; j < x + w; ++j) {
			for (int k = y; k < y + h; ++k) arr[j][k] = i;
		}
	}

	vector<int> v(n + 1);
	for (int i = 0; i < 1001; ++i) {
		for (int j = 0; j < 1001; ++j) {
			if (arr[i][j] > 0) ++v[arr[i][j]];
		}
	}

	for (int i = 1; i <= n; ++i) cout << v[i] << '\n';

	return 0;
}
