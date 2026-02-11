#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34552 디딤돌 장학금
	// 수학
	int n, b, s;
	double l;

	int arr[11] = { 0 };
	for (int i = 0; i <= 10; ++i) cin >> arr[i];

	cin >> n;
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		cin >> b >> l >> s;
		if (s >= 17 && l >= 2.0) ans += arr[b];
	}

	cout << ans;

	return 0;
}
