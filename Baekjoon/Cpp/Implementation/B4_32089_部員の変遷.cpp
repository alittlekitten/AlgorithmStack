#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32089 部員の変遷
	// 구현
	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;

		int arr[1000] = { 0 };
		for (int i = 0; i < n; ++i) cin >> arr[i];

		int curr = 0;
		int ans = 0;

		for (int i = 0; i < n; ++i) {
			curr += arr[i];
			if (i >= 3) curr -= arr[i - 3];
			if (curr > ans) ans = curr;
		}

		cout << ans << '\n';
	}

	return 0;
}
