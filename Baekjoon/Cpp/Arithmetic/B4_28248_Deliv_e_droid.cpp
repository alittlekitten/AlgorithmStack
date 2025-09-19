#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28248 Deliv-e-droid
	// 수학
	int p, c;
	cin >> p >> c;

	if (p > c) cout << (p * 50) - (c * 10) + 500;
	else cout << (p * 50) - (c * 10);

	return 0;
}
