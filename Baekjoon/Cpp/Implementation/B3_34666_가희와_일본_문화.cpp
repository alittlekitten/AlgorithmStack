#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34666 가희와 일본 문화
	// 구현
	int q, a, b, c, d;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> a >> b >> c >> d;
		bool chk = false;
		if ((a == 1 || a == 2) && (d >= 50)) {
			// 3-1
			if ((a == 1 && b < 34 && c < 34) || (a == 2 && b < 30 && c < 30)) chk = true;
			else if (b <= 21 || c <= 21) chk = true;
		}

		if (chk) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
