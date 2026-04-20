#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34115 먼 카드
	// 구현
	int n, x;
	cin >> n;

	int arr[2001] = { 0 };
	int ans = 0;

	for (int i = 1; i <= 2 * n; ++i) {
		cin >> x;

		if (arr[x] == 0) arr[x] = i;
		else ans = max(ans, i - arr[x] - 1);
	}

	cout << ans;

	return 0;
}
