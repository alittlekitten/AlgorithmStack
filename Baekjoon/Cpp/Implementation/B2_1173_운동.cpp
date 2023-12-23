#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1173 운동
	// 구현
	int n, m, M, t, r;
	cin >> n >> m >> M >> t >> r;

	int ans = 0;
	int pulse = m;

	if (M - m < t) {
		cout << -1;
		return 0;
	}

	while (1) {
		if (pulse + t <= M) {
			pulse += t;
			--n;
		}
		else {
			pulse -= r;
			if (pulse < m) pulse = m;
		}
		++ans;
		if (n == 0) {
			cout << ans;
			return 0;
		}
	}

	return 0;
}
