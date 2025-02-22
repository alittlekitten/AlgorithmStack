#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6246 풍선 놀이
	// 구현
	int n, q;
	cin >> n >> q;
	vector<bool> v(n, false);

	while (q--) {
		int a, b;
		cin >> a >> b;
		for (int i = a - 1; i < n; i += b) v[i] = true;
	}

	int ans = 0;
	for (auto elem : v) {
		if (elem == false) ++ans;
	}

	cout << ans << '\n';

	return 0;
}
