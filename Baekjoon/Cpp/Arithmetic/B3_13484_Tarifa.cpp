#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13484 Tarifa
	// 수학
	int x, n, p;
	cin >> x >> n;

	int ans = x;
	for (int i = 0; i < n; i++) {
		cin >> p;
		ans += (x - p);
	}

	cout << ans;

	return 0;
}
