#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12836 가계부 (Easy)
	// 구현
	long long n, m, a, b, c;
	long long arr[10001] = { 0 };
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;

		if (a == 1) arr[b] += c;
		else {
			long long ans = 0;
			for (int j = b; j <= c; ++j) ans += arr[j];
			cout << ans << '\n';
		}
	}

	return 0;
}
