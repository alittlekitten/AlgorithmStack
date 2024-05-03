#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 8320 직사각형을 만드는 방법
	// 수학
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = i; i * j <= n; ++j) ++ans;
	}

	cout << ans;

	return 0;
}
