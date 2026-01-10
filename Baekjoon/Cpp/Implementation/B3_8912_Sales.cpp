#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8912 Sales
	// 구현
	int t, n, a;
	cin >> t;

	while (t--) {
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			v.push_back(a);
		}

		int ans = 0;
		for (int i = 1; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				if (v[j] <= v[i]) ++ans;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
