#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1817 짐 챙기는 숌
	// 그리디
	int n, m;
	int book[51] = { 0 };
	cin >> n >> m;
	if (n == 0) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < n; ++i) cin >> book[i];

	int sum = 0;
	int ans = 1;
	for (int i = n - 1; i >= 0; --i) {
		sum += book[i];
		if (sum > m) {
			++ans;
			sum = book[i];
		}
	}
	cout << ans;

	return 0;
}
