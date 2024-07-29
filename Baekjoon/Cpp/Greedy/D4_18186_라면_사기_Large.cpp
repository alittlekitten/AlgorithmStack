#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18186 라면 사기 (Large)
	// 그리디
	int n;
	long long b, c;
	cin >> n >> b >> c;

	long long arr[1000001] = { 0 };
	long long cnt[1000001] = { 0 };

	for (int i = 0; i < n; ++i) cin >> arr[i];

	// b <= c 면 굳이 케이스를 나눌 필요가 없음 (다 b원에 사면 됨)
	if (b <= c) {
		long long ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += b * arr[i];
		}
		cout << ans;
	}
	else {
		long long ans = b * arr[0];
		for (int i = 1; i < n; ++i) {
			// b + c에 사는 케이스
			long long tmp = min(arr[i], arr[i - 1]);
			arr[i] -= tmp;
			cnt[i] += tmp;
			ans += c * tmp;

			// b + 2c에 사는 케이스
			tmp = min(arr[i], cnt[i - 1]);
			arr[i] -= tmp;
			ans += c * tmp;

			// b에 사는 케이스
			ans += b * arr[i];
		}

		cout << ans;
	}

	return 0;
}
