#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27566 Blueberry Waffle
	// 수학
	int r, f;
	cin >> r >> f;

	int tmp = (f + r / 2) / r;

	if (tmp % 2 == 0) cout << "up";
	else cout << "down";

	return 0;
}
