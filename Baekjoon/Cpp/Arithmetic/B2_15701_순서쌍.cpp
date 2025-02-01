#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15701 순서쌍
	// 수학
	long long n;
	cin >> n;
	int ans = 0;
	for (long long i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			if (i * i == n) ++ans;
			else ans += 2;
		}
	}

	cout << ans;

	return 0;
}
