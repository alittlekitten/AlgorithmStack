#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12790 Mini Fantasy War
	// 수학
	int t, hp, mp, atk, def, a, b, c, d;
	cin >> t;

	while (t--) {
		cin >> hp >> mp >> atk >> def >> a >> b >> c >> d;
		hp += a;
		mp += b;
		atk += c;
		def += d;
		cout << max(1, hp) + 5 * max(1, mp) + 2 * max(0, atk) + 2 * def << '\n';
	}

	return 0;
}
