#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32941 왜 맘대로 예약하냐고
	// 구현
	int t, x, n, k, input;
	cin >> t >> x >> n;

	for (int i = 0; i < n; ++i) {
		bool chk = false;
		cin >> k;

		for (int j = 0; j < k; ++j) {
			cin >> input;
			if (input == x) chk = true;
		}

		if (!chk) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

	return 0;
}
