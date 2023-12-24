#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1476 날짜 계산
	// 브루트포스
	int e, s, m;
	int ans = 1;
	cin >> e >> s >> m;
	while (1) {
		if ((ans - e) % 15 == 0 && (ans - s) % 28 == 0 && (ans - m) % 19 == 0) break;
		else ++ans;
	}

	cout << ans;

	return 0;
}
