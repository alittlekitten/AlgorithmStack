#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1952 달팽이2
	// 수학
	int n, m;
	cin >> n >> m;

	if (n == m) cout << 2 * (n - 1);
	else if (n > m) cout << 2 * (m - 1) + 1;
	else cout << 2 * (n - 1);

	return 0;
}
