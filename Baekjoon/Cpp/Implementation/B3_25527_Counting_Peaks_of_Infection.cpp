#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25527 Counting Peaks of Infection
	// 구현
	int n, input;
	while (1) {
		cin >> n;
		if (!n) break;

		vector<int> v;
		for (int i = 0; i < n; ++i) {
			cin >> input;
			v.push_back(input);
		}
		int ans = 0;
		for (int i = 1; i < n - 1; ++i) {
			if (v[i] > v[i - 1] && v[i] > v[i + 1]) ++ans;
		}

		cout << ans << '\n';
	}

	return 0;
}
