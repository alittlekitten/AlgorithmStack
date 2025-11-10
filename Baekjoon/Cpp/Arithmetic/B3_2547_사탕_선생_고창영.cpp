#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2547 사탕 선생 고창영
	// 수학
	int t;
	long long n, s;
	cin >> t;
	while (t--) {
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> s;
			sum = (sum + s) % n;
		}
		if (sum % n) cout << "NO" << '\n';
		else cout << "YES" << '\n';
	}

	return 0;
}
