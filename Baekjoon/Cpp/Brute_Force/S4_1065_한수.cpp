#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1065 한수
	// 브루트포스
	int n; 
	cin >> n;

	if (n < 100) cout << n;
	else if (n == 1000) cout << 144;
	else {
		int ans = 99;
		for (int i = 100; i <= n; ++i) {
			int a = i % 10;
			int b = (i / 10) % 10;
			int c = (i / 100) % 10;
			if (c - b == b - a) ++ans;
		}
		cout << ans;
	}

	return 0;
}
