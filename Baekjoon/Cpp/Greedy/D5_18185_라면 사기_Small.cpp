#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18185 라면 사기 (Small)
	// 그리디
	int n;
	cin >> n;

	int arr[10001] = { 0 };
	int cnt[10001] = { 0 };

	for (int i = 0; i < n; ++i) cin >> arr[i];

	// 초기설정
	int ans = 3 * arr[0];

	for (int i = 1; i < n; ++i) {
		// 1개씩만 사는 경우는 3원, 나머지 케이스에 대해서는 2원이 더해짐
		// 2연구매
		int tmp = min(arr[i], arr[i - 1]);
		arr[i] -= tmp;
		cnt[i] += tmp;
		ans += 2 * tmp;

		// 3연구매
		tmp = min(arr[i], cnt[i - 1]);
		arr[i] -= tmp;
		ans += 2 * tmp;

		// 단품구매
		ans += 3 * arr[i];
	}

	cout << ans;

	return 0;
}
