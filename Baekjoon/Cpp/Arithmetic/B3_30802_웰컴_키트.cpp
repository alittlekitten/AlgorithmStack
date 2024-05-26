#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30802 웰컴 키트
	// 수학
	int n, t, p;
	cin >> n;
	int arr[6] = { 0 };
	int ans = 0;
	for (int i = 0; i < 6; ++i) cin >> arr[i];

	cin >> t >> p;
	for (int i = 0; i < 6; ++i) ans += (arr[i] + t - 1) / t;

	cout << ans << '\n' << n / p << " " << n % p;

	return 0;
}
