#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28214 크림빵
	// 구현
	int n, k, p, input;
	int ans = 0;
	cin >> n >> k >> p;

	for (int i = 0; i < n; ++i) {
		int cnt = 0;
		for (int j = 0; j < k; ++j) {
			cin >> input;
			if (input) ++cnt;
		}

		if (k - cnt < p) ++ans;
	}

	cout << ans;

	return 0;
}
