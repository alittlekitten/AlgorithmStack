#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32279 수열의 비밀 (Easy)
	// 수학
	int n, p, q, r, s, a;
	cin >> n >> p >> q >> r >> s >> a;
	
	int arr[21] = { 0 };
	arr[1] = a;

	for (int i = 2; i <= n; ++i) {
		if (i % 2) arr[i] = r * arr[i / 2] + s;
		else arr[i] = p * arr[i / 2] + q;
	}

	int ans = 0;
	for (int i = 1; i <= n; ++i) ans += arr[i];
	cout << ans;

	return 0;
}
