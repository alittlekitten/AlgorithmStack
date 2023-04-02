#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11055 가장 긴 증가하는 부분 수열
	// DP
	int n;
	int ans = 0;
	cin >> n;
	int arr[1000] = { 0 };
	int dp[1000] = { 0 }; // 해당 위치에서 가장 긴 증가하는 부분수열을 저장
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		dp[i] = arr[i];
		for (int j = 0; j < i; ++j) {
			// 방금 입력받은 값이 이전에 입력받은 값보다 크면 dp[i] 갱신
			if (arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + arr[i]);
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;

	return 0;
}
