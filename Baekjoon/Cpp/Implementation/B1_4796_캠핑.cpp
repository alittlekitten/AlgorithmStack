#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4796 캠핑
	// 구현
	int l, p, v;
	int i = 1;
	while (1) {
		cin >> l >> p >> v;
		if (!l && !p && !v) break;
		int ans = (v / p) * l + min(v % p, l);
		cout << "Case " << i << ": " << ans << '\n';
		++i;
	}

	return 0;
}
