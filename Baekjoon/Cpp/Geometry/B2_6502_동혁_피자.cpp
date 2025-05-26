#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6502 동혁 피자
	// 기하학
	double r, w, l;
	int cnt = 1;
	while (1) {
		cin >> r;
		if (!r) break;
		cin >> w >> l;
		if (r >= sqrt(l / 2 * l / 2 + w / 2 * w / 2)) cout << "Pizza " << cnt << " fits on the table.";
		else cout << "Pizza " << cnt << " does not fit on the table.";
		++cnt;
		cout << '\n';
	}

	return 0;
}
