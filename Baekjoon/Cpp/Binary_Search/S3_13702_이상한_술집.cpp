#include <iostream>
#include <string>

using namespace std;

int v[10000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13702 이상한 술집
	// 이분탐색
	long long s, e, n, k;
	long long sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	s = 0;
	e = sum / n;
	while (s <= e) {
		long long mid = (s + e) / 2;
		long long cnt = 0;
		if (mid == 0) break;
		for (int i = 0; i < n; ++i) {
			cnt += v[i] / mid;
		}
		if (cnt < k) e = mid - 1;
		else s = mid + 1;
	}
	cout << e;

	return 0;
}
