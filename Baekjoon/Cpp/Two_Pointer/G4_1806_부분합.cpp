#include <iostream>

using namespace std;

int arr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1806 부분합
	// 투 포인터

	int n, s;
	cin >> n >> s;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int start = 0;
	int end = 0;
	int sum = arr[0];
	int len = 0;
	int ans = 100001;
	while (start <= end) {
		len = end - start + 1;
		if (sum >= s) {
			if (len < ans) ans = len;
			sum -= arr[start];
			start++;
		}
		else if (sum < s) {
			end++;
			if (end == n) break;
			sum += arr[end];
		}
	}
	if (ans == 100001) cout << 0;
	else cout << ans;
	return 0;
}
