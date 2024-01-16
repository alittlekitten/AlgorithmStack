#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9455 박스
	// 구현
	int t, m, n;
	cin >> t;

	while (t--) {
		int ans = 0;
		int arr[100][100] = { 0 };
		cin >> m >> n;

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (arr[j][i]) {
					for (int k = j + 1; k < m; ++k) {
						if (!arr[k][i]) ++ans;
					}
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
