#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16396 선 그리기
	// 구현
	int n, x, y;
	bool v[10001][10001] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		for (int j = x; j < y; ++j) v[j][j + 1] = true;
	}

	int ans = 0;
	for (int i = 1; i < 10000; ++i) {
		if (v[i][i + 1]) ++ans;
	}

	cout << ans;

	return 0;
}
