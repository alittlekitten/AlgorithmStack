#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33162 散歩 (Walking)
	// 수학
	int x;
	cin >> x;
	
	int ans = 0;
	for (int i = 0; i < x; ++i) {
		if (i % 2) ans -= 2;
		else ans += 3;
	}
	cout << ans;

	return 0;
}
