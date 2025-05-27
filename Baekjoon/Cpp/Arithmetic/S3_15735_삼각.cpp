#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15735 삼각
	// 수학
	int n;
	long long arr[10001] = { 0 };
	for (int i = 1; i < 10001; ++i) arr[i] = arr[i - 1] + i;
	cin >> n;

	long long ans = 0;
	for (int i = 1; i <= n; ++i) ans += arr[i];
	for (int i = n - 1; i > 0; i -= 2) ans += arr[i];
	cout << ans;

	return 0;
}
