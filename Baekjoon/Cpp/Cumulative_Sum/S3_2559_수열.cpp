#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2559 수열
	// 누적합
	int n, k, input;
	int arr[100001] = { 0 };
	cin >> n >> k;

	for (int i = 1; i <= n; ++i) {
		cin >> input;
		arr[i] = arr[i - 1] + input;
	}

	int ans = -20100000;
	for (int i = k; i <= n; ++i) ans = max(ans, (arr[i] - arr[i - k]));

	cout << ans;

	return 0;
}
