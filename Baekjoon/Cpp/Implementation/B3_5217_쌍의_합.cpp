#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5217 쌍의 합
	// 구현
	int t, n;
	cin >> t;

	while (t--) {
		bool chk = false;
		cin >> n;
		cout << "Pairs for " << n << ": ";
		for (int i = 1; i <= 12; ++i)
			for (int j = 1; j <= 12; ++j) {
				if (i + j == n && i < j) {
					if (!chk) {
						chk = true;
						cout << i << " " << j;
					}
					else cout << ", " << i << " " << j;
				}
			}
		cout << '\n';
	}

	return 0;
}
