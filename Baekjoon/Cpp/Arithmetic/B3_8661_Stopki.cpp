#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8661 Stopki
	// 수학
	int x, k, a;
	cin >> x >> k >> a;

	if (x % (k + a) < k) cout << 1;
	else cout << 0;

	return 0;
}
