#include <iostream>
using namespace std;

int func(int a, int b, int c, int d, int cnt) {
	if (a == b && b == c && c == d && d == a) return cnt;
	return func(abs(a - b), abs(b - c), abs(c - d), abs(d - a), cnt + 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4084 Viva la Diferencia
	// 구현, 시뮬레이션
	int a, b, c, d;
	while (1) {
		cin >> a >> b >> c >> d;

		// 정지조건
		if (a == 0 && b == 0 && c == 0 && d == 0) break;

		cout << func(a, b, c, d, 0) << "\n";

	}

	return 0;
}
