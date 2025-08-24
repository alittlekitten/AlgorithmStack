#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16433 주디와 당근농장
	// 구현
	int n, r, c;
	cin >> n >> r >> c;
	bool chk = ((r + c) % 2);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (!chk) cout << 'v';
			else cout << '.';
			chk = !chk;
		}
		cout << '\n';

		if (n % 2 == 0) chk = !chk;
	}

	return 0;
}
