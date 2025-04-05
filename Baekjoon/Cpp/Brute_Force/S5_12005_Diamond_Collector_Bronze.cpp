#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12005 Diamond Collector (Bronze)
	// 브루트포스
	int n, k;
	int arr[1001] = { 0 };
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n);

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] - arr[i] <= k && j - i + 1 > ans) ans = j - i + 1;
		}
	}
	cout << ans;

	return 0;
}
