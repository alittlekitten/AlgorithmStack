#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13900 순서쌍의 곱의 합
	// 누적합
	int n;
	cin >> n;
	long long arr[100001] = { 0 };
	long long sum[100001] = { 0 };
	for (int i = 0; i < n; ++i) cin >> arr[i];

	long long ans = 0;
	sum[0] = arr[0];
	for (int i = 1; i < n; ++i) sum[i] = sum[i - 1] + arr[i];
	for (int i = 0; i < n - 1; ++i) ans += arr[i] * (sum[n - 1] - sum[i]);

	cout << ans;

	return 0;
}
