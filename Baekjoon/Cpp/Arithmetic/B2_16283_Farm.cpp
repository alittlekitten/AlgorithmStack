#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16283 Farm
	// 수학
	int a, b, n, w;
	cin >> a >> b >> n >> w;

	int tmp = 0;
	int idx = 0;
	for (int i = 1; i < n; ++i) {
		if (a * i + b * (n - i) == w) {
			idx = i;
			++tmp;
		}
	}

	if (tmp == 1) cout << idx << " " << n - idx;
	else cout << -1;

	return 0;
}
