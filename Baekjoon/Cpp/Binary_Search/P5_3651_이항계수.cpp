#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long m;

long long nCr(long long n, long long r) {
	if (r > n) return 0;
	if (r > n - r) r = n - r;
	long long res = 1;
	for (long long i = 0; i < r; ++i) {
		res *= (n - i);
		res /= (i + 1);
		if (res > m || res < 1) return m + 1; // 오버플로우시 그대로 종료
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3651 이항계수
	// 수학, 이분탐색
	cin >> m;

	vector<pair<long long, long long>> v;

	for (long long i = 1; i <= 27; ++i) {
		long long low = i * 2;
		long long high = m + 1;
		while (low + 1 < high) {
			long long mid = (low + high) / 2;
			if (nCr(mid, i) <= m) low = mid;
			else high = mid;
		}
		if (nCr(low, i) == m) {
			v.push_back(make_pair(low, i));
			if (i < low - i) v.push_back(make_pair(low, low - i));
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << '\n';
	for (long long i = 0; i < v.size(); ++i) {
		cout << v[i].first << " " << v[i].second << '\n';
	}

	return 0;
}
