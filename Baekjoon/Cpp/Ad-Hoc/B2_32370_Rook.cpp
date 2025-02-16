#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32370 Rook
	// 애드 혹
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	if (a && b) cout << 2;
	else if (!a && !x && y < b) cout << 3;
	else if (!b && !y && x < a) cout << 3;
	else cout << 1;

	return 0;
}
