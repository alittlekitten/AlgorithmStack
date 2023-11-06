#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29752 최장 스트릭
	// 구현
	int n, s;
	int cnt = 0;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s) ++cnt;
		else {
			if (ans < cnt) ans = cnt;
			cnt = 0;
		}
	}
	if (ans < cnt) ans = cnt;
	cout << ans;

	return 0;
}
