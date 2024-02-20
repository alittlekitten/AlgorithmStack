#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1531 투명
	// 구현
	int n, m, x1, x2, y1, y2;
	cin >> n >> m;

	int ans = 0;
	int arr[101][101] = { 0 };

	// 종이로 가리기
	for (int i = 0; i < n; ++i) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x <= x2; ++x) {
			for (int y = y1; y <= y2; ++y) {
				++arr[x][y];
			}
		}
	}

	// 가려진데 세기
	for (int i = 0; i <= 100; ++i) {
		for (int j = 0; j <= 100; ++j) {
			if (arr[i][j] > m) ++ans;
		}
	}
	cout << ans;

	return 0;
}
