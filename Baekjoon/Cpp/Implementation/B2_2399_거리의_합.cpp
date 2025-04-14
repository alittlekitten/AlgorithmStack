#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2399 거리의 합
	// 구현
	int n;
	long long arr[10001] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	long long ans = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) ans += abs(arr[i] - arr[j]);
	}

	cout << ans;

	return 0;
}
