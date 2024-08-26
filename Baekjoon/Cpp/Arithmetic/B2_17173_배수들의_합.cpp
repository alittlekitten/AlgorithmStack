#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17173 배수들의 합
	// 수학
	int n, m, k;
	int arr[1001] = { 0 };
	int ans = 0;
	cin >> n >> m;

	while (m--) {
		cin >> k;
		for (int i = k; i <= n; i += k) arr[i] = 1;
	}

	for (int i = 1; i <= n; ++i) if (arr[i]) ans += i;

	cout << ans;

	return 0;
}
