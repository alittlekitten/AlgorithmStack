#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33164 どら焼き (Dorayaki)
	// 브루트포스
	int n, m;
	int arr1[101] = { 0 };
	int arr2[101] = { 0 };

	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> arr1[i];
	for (int i = 0; i < m; ++i) cin >> arr2[i];

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			ans += (arr1[i] + arr2[j]) * max(arr1[i], arr2[j]);
		}
	}

	cout << ans;

	return 0;
}
