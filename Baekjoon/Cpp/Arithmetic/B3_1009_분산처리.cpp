#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1009 분산처리
	// 수학

	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		int ans = 1;
		for (int j = 0; j < b; ++j) {
			if (ans * a < 10) ans *= a;
			else ans = ans * a % 10;
		}
		if (ans == 0) cout << 10 << '\n';
		else cout << ans << '\n';
	}

	return 0;
}
