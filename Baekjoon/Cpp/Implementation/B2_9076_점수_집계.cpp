#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9076 점수 집계
	// 구현
	int t;
	cin >> t;
	while (t--) {
		int arr[5] = { 0 };
		for (int i = 0; i < 5; ++i) cin >> arr[i];
		sort(arr, arr + 5);

		if (arr[3] - arr[1] >= 4) cout << "KIN\n";
		else {
			int ans = 0;
			for (int i = 1; i < 4; ++i) ans += arr[i];
			cout << ans << '\n';
		}
	}

	return 0;
}
