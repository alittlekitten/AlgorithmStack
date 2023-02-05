#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27330 Score
	// 수학
	int n, m;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr1[i];
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> arr2[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += arr1[i];
		for (int j = 0; j < m; ++j) {
			if (ans == arr2[j]) {
				ans = 0;
				break;
			}
		}
	}

	cout << ans;

	return 0;
}
