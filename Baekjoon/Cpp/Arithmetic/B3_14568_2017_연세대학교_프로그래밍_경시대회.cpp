#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14568 2017 연세대학교 프로그래밍 경시대회
	// 수학
	int n;
	cin >> n;

	int ans = 0;
	for (int a = 2; a <= n; a += 2) {
		for (int b = 1; b <= n; ++b) {
			for (int c = b + 2; c <= n; ++c) {
				if (a + b + c == n) ++ans;
			}
		}
	}

	cout << ans;

	return 0;
}
