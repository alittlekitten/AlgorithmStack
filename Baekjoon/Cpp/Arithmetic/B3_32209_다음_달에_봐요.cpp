#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32209 다음 달에 봐요
	// 수학
	int q, x, y;
	int e = 0;
	bool chk = true;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> x >> y;
		if (x == 1) e += y;
		else if (x == 2) {
			if (e < y) {
				cout << "Adios";
				chk = false;
				break;
			}
			else e -= y;
		}
	}

	if (chk) cout << "See you next month";

	return 0;
}
