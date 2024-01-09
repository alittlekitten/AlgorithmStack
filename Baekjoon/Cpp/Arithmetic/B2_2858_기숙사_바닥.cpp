#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2858 기숙사 바닥
	// 수학
	int r, b, rr, bb;
	bool chk = false;
	cin >> r >> b;

	for (int i = 3; ; ++i) {
		for (int j = i; j >= 3; --j) {
			bb = (i - 2) * (j - 2);
			rr = i * j - bb;
			if (rr == r && bb == b) {
				cout << i << ' ' << j;
				chk = true;
			}
			if (chk) break;
		}
		if (chk) break;
	}

	return 0;
}
