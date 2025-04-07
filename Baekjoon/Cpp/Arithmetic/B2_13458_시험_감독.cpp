#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13458 시험 감독
	// 수학
	long long n, b, c;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	cin >> b >> c;

	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		v[i] = v[i] - b;
		++ans;
		if (v[i] <= 0) continue;
		if (v[i] % c > 0) ans += v[i] / c + 1;
		else ans += v[i] / c;
	}
	cout << ans;

	return 0;
}
