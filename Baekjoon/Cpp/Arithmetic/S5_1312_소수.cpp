#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1312 소수
	// 수학
	int a, b, n;
	cin >> a >> b >> n;

	int ans;
	for (int i = 0; i <= n; ++i) {
		ans = a / b;
		a %= b;
		a *= 10;
	}
	cout << ans;

	return 0;
}
