#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9094 수학적 호기심
	// 수학
	int t, n, m;
	cin >> t;
	while (t--) {
		int ans = 0;
		cin >> n >> m;
		for (int i = 1; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (!((i * i + j * j + m) % (i * j))) ++ans;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}
