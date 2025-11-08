#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9784 Boiled Eggs
	// 정렬
	int tc, n, p, q;
	int arr[30] = { 0 };
	cin >> tc;

	for (int t = 1; t <= tc; ++t) {
		cin >> n >> p >> q;
		for (int i = 0; i < n; ++i) cin >> arr[i];
		sort(arr, arr + n);

		int sum = 0;
		int cnt = n;
		for (int i = 0; i < n; ++i) {
			if (sum + arr[i] > q) {
				cnt = i;
				break;
			}
			else sum += arr[i];
		}

		cout << "Case " << t << ": " << min(cnt, p) << '\n';
	}

	return 0;
}
