#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12833 XORXORXOR
	// 비트마스킹
	int a, b, c, ans;
	cin >> a >> b >> c;
	if (c % 2) ans = a ^ b;
	else ans = a;
	cout << ans;

	return 0;
}
