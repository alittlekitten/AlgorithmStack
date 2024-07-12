#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15818 오버플로우와 모듈러
	// 수학
	int n, m;
	long long arr[101] = { 0 };
	long long ans = 1;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	for (int i = 0; i < n; ++i) {
		ans *= (arr[i] % m);
		ans %= m;
	}
	cout << ans;

	return 0;
}
