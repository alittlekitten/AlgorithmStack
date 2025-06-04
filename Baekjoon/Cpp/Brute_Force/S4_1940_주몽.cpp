#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1940 주몽
	// 브루트포스
	int n, m;
	int ans = 0;
	int arr[15001] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[i] + arr[j] == m) ++ans;
		}
	}

	cout << ans;

	return 0;
}
