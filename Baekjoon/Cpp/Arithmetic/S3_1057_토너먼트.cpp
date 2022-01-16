#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1057 토너먼트
	int n, k, l;
	int cnt = 1;
	cin >> n >> k >> l;
	k--;
	l--;
	while (1) {
		if (k / 2 == l / 2) break;
		else {
			k /= 2;
			l /= 2;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}
