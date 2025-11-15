#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1773 폭죽쇼
	// 브루트포스
	int n, c;
	int arr[2000001] = { 0 };
	int s[100] = { 0 };
	cin >> n >> c;

	for (int i = 0; i < n; ++i) cin >> s[i];

	for (int i = 0; i < n; ++i) {
		for (int j = s[i]; j <= c; j += s[i]) {
			arr[j] = 1;
		}
	}

	int ans = 0;
	for (int i = 0; i <= c; ++i) {
		if (arr[i] == 1) ++ans;
	}

	cout << ans;

	return 0;
}
