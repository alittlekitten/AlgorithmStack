#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8710 Koszykarz
	// 수학
	int k, w, m;
	cin >> k >> w >> m;
	if ((w - k) / m <= 0) cout << 0;
	else if ((w - k) % m == 0) cout << (w - k) / m;
	else cout << (w - k) / m + 1;

	return 0;
}
