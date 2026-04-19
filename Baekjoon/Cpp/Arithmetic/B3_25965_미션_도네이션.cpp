#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25965 미션 도네이션
	// 수학
	long long n, m, k, d, a;
	long long arr[100][3] = { 0 };
	cin >> n;

	while (n--) {
		long long ans = 0;
		cin >> m;
		for (int i = 0; i < m; ++i) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		cin >> k >> d >> a;

		for (int i = 0; i < m; ++i) ans += max(arr[i][0] * k - arr[i][1] * d + arr[i][2] * a, 0LL);
		cout << ans << '\n';
	}


	return 0;
}
