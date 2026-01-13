#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10695 Dalia
	// 수학
	int t, n, r1, c1, r2, c2;
	cin >> t;

	for (int i = 1; i <= t; ++i) {
		cin >> n >> r1 >> c1 >> r2 >> c2;

		int rr = abs(r1 - r2);
		int cc = abs(c1 - c2);

		cout << "Case " << i << ": ";
		if ((rr == 2 && cc == 1) || (rr == 1 && cc == 2)) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
