#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9950 Rectangles
	// 수학
	int l, w, a;
	while (1) {
		cin >> l >> w >> a;
		if (l == 0 && w == 0 && a == 0) break;
		else if (l == 0) cout << a / w << " " << w << " " << a << '\n';
		else if (w == 0) cout << l << " " << a / l << " " << a << '\n';
		else if (a == 0) cout << l << " " << w << " " << l * w << '\n';
	}

	return 0;
}
