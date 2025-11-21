#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15734 명장 남정훈
	// 수학
	int l, r, a;
	cin >> l >> r >> a;

	while (a > 0) {
		if (l < r) ++l;
		else ++r;
		--a;
	}

	cout << 2 * min(l, r);

	return 0;
}
