#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31282 ЛОВНО КУЧЕ
	// 수학
	int n, m, k;
	cin >> n >> m >> k;

	cout << (n + k - m - 1) / (k - m);

	return 0;
}
