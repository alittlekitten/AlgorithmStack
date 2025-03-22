#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11652 카드
	// 정렬
	long long n, input;
	vector<long long> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	int maxValue = 0;
	int cnt = 0;
	long long ans = v[0];
	for (int i = 1; i < n; ++i) {
		if (v[i] == v[i - 1]) {
			++cnt;
			if (cnt > maxValue) {
				maxValue = cnt;
				ans = v[i];
			}
		}
		else cnt = 0;
	}

	cout << ans;

	return 0;
}
