#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7782 Alien
	// 구현
	int n, x, x1, x2, y, y1, y2;
	cin >> n >> x >> y;

	bool chk = false;
	for (int i = 0; i < n; ++i) {
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 <= x && x <= x2 && y1 <= y && y <= y2) chk = true;
	}

	if (chk) cout << "Yes";
	else cout << "No";

	return 0;
}
