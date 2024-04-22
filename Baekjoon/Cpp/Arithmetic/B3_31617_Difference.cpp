#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31617 差 (Difference)
	// 수학
	int k, n, m;
	int a[100] = { 0 };
	int b[100] = { 0 };
	int ans = 0;

	cin >> k >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; ++i) cin >> b[i];
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (b[j] - a[i] == k) ++ans;
		}
	}

	cout << ans;

	return 0;
}
