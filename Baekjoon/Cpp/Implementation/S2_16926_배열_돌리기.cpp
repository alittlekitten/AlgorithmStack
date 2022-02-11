#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 16926 배열 돌리기
	// 빡구현

	int n, m, t;
	cin >> n >> m >> t;

	int minnum = min(n, m);
	int dr[4] = { 0, 1, 0, -1 };
	int dc[4] = { 1, 0, -1 ,0 };

	int arr[100][100];
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < t; ++i) {
		for (int j = 0; j < minnum/2; ++j) {
			int r = j;
			int c = j;
			int tmp = arr[j][j];
			int cnt = 0;
			while (cnt < 4) {
				int cr = r + dr[cnt];
				int cc = c + dc[cnt];
				if (cr >= j && cr < n - j && cc >= j && cc < m - j) {
					arr[r][c] = arr[cr][cc];
					r = cr;
					c = cc;
				}
				else cnt++;
			}
			arr[j + 1][j] = tmp;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}
