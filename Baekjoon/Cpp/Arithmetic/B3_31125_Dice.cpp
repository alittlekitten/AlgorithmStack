#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31125 Dice
	// 수학
	int b, s, n, f, m;
	cin >> b;

	for (int i = 0; i < b; ++i) {
		cin >> s >> n >> f >> m;

		if (s >= n + m && s <= n * f + m) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
