#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9546 3000번 버스
	// 수학
	int t, k;
	cin >> t;
	while (t--) {
		cin >> k;
		int cnt = 1;
		for (int i = 1; i < k; ++i) cnt = cnt * 2 + 1;
		cout << cnt << '\n';
	}

	return 0;
}
