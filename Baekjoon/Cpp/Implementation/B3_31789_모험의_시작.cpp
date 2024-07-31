#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31789 모험의 시작
	// 구현
	int n, x, s, c, p;
	cin >> n >> x >> s;
	bool chk = false;

	for (int i = 0; i < n; ++i) {
		cin >> c >> p;

		if (c <= x && p > s) {
			chk = true;
			break;
		}
	}

	if (chk) cout << "YES";
	else cout << "NO";

	return 0;
}
