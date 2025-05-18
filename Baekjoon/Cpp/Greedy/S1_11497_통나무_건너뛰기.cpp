#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11497 통나무 건너뛰기
	// 그리디
	int t, n ,l;
	int arr[10001] = { 0 };
	cin >> t;

	while (t--) {
		cin >> n;

		for (int i = 0; i < n; ++i) cin >> arr[i];
		sort(arr, arr + n);

		int ans = 0;
		ans = max(ans, arr[1] - arr[0]);
		ans = max(ans, arr[n - 1] - arr[n - 2]);

		for (int i = 0; i < n - 2; ++i) ans = max(ans, arr[i + 2] - arr[i]);
		cout << ans << '\n';
	}

	return 0;
}
