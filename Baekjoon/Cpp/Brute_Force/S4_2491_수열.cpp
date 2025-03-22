#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2491 수열
	// 브루트포스
	int n, input;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v[i] = input;
	}

	int ans = 0;
	int cnt = 1;
	for (int i = 0; i < n - 1; ++i) {
		if (v[i] <= v[i + 1]) ++cnt;
		else {
			ans = max(ans, cnt);
			cnt = 1;
		}
	}

	ans = max(ans, cnt);
	cnt = 1;

	// 두번 탐색해서 체크
	for (int i = 0; i < n - 1; ++i) {
		if (v[i] >= v[i + 1]) ++cnt;
		else {
			ans = max(ans, cnt);
			cnt = 1;
		}
	}
	ans = max(ans, cnt);
	cout << ans;

	return 0;
}
