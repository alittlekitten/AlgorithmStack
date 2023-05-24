#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18414 The Nearest Value
	// 수학
	int x, l, r;
	cin >> x >> l >> r;
	if (x < l) cout << l;
	else if (x >= r) cout << r;
	else cout << x;

	return 0;
}
