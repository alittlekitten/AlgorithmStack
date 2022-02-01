#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int n;

	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 6064 카잉 달력
	// 정수론
	
	int t, m, n, x, y;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> m >> n >> x >> y;
		bool chk = false;

		// 먼저 x를 맞춘다
		// 첫 번째로 맞는 x와 y값을 구한다
		int a = x;
		int b = (x-1) % n + 1;
		int cnt = x;

		while (cnt <= lcm(m, n)) {
			if (a == x && b == y) {
				cout << cnt << '\n';
				chk = true;
				break;
			}
			else {
				b = ((b + m) - 1) % n + 1;
				cnt += m;
			}
		}

		if (chk == false) cout << -1 << '\n';

	}

	return 0;
}
