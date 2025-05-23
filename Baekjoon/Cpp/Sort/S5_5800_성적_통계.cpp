#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5800 성적 통계
	// 정렬
	int k, n;
	int arr[51] = { 0 };
	cin >> k;

	for (int i = 1; i <= k; ++i) {
		cin >> n;
		for (int i = 0; i < n; ++i) cin >> arr[i];

		sort(arr, arr + n, greater<>());

		int g = 0;
		int lg = 0;
		for (int i = 1; i < n; ++i) {
			g = arr[i - 1] - arr[i];
			if (lg < g) lg = g;
		}

		cout << "Class " << i << '\n' << "Max " << arr[0] << ", Min " << arr[n - 1] << ", Largest gap " << lg << '\n';
	}

	return 0;
}
