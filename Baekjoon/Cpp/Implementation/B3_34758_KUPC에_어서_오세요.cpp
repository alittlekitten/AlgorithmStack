#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34758 KUPC에 어서 오세요
	// 구현
	int x, y, n, a, b;
	cin >> x >> y >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (x != a && y != b) cout << 1 << '\n';
		else cout << 0 << '\n';
	}

	return 0;
}
