#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16208 귀찮음
	// 수학
	long long n, x;
	vector<long long> v;
	cin >> n;

	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		sum += x;
		v.push_back(x);
	}

	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		sum -= v[i];
		ans += v[i] * sum;
	}

	cout << ans;

	return 0;
}
