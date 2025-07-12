#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 19575 Polynomial
	// 수학
	int n, x, a, i;
	cin >> n >> x;
	long long ans = 0;
	for (int j = 0; j < n + 1; ++j) {
		cin >> a >> i;
		if (j == 0) ans = a;
		else ans = (ans * x + a) % 1000000007;
	}
	cout << ans;

	return 0;
}
