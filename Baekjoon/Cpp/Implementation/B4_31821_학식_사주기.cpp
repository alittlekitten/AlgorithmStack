#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31821 학식 사주기
	// 구현
	int n, m, b;
	int arr[11] = { 0 };
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	cin >> m;
	for (int i = 1; i <= m; ++i) {
		cin >> b;
		ans += arr[b];
	}
	cout << ans;

	return 0;
}
