#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23827 수열(Easy)
	// 누적합
	long long n;
	long long arr[500001] = { 0 }; // 수열
	long long cs[500001] = { 0 }; // 누적합
	cin >> n;

	long long ans = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];

		cs[i] = cs[i - 1] + arr[i];
		ans += arr[i] * cs[i - 1];
		ans %= 1000000007;
	}
	cout << ans;

	return 0;
}
