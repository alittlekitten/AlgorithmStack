#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13300 방 배정
	// 수학
	int n, k, s, y;
	cin >> n >> k;
	int arr[2][7] = { 0 };

	for (int i = 0; i < n; ++i) {
		cin >> s >> y;
		++arr[s][y];
	}

	int ans = 0;
	for (int i = 0; i <= 1; ++i) {
		for (int j = 1; j <= 6; ++j) {
			while (arr[i][j] > 0) {
				arr[i][j] -= k;
				++ans;

			}
		}
	}
	cout << ans;

	return 0;
}
