#include <iostream>

using namespace std;

int arr[50][50];
int tmparr[50][50];
int dr[4] = { 0, -1, 0, 1 };
int dc[4] = { 1, 0, -1, 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17144 미세먼지 안녕!
	// 구현

	int r, c, t;
	int ar1 = -1;
	int ar2 = -1;
	int ac = -1;
	cin >> r >> c >> t;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == -1 && ar1 == -1) {
				ar1 = i;
				ar2 = i + 1;
			}
		}
	}

	// 확산
	int now = 0;
	while (now < t) {
		++now;

		// tmparr 초기화
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				tmparr[i][j] = 0;
			}
		}

		// 상하좌우 확산
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				if (arr[i][j] > 0) {
					int dust = arr[i][j] / 5;
					for (int k = 0; k < 4; ++k) {
						int rr = i + dr[k];
						int cc = j + dc[k];
						if (rr < 0 || rr >= r || cc < 0 || cc >= c || arr[rr][cc] == -1) continue;
						tmparr[rr][cc] += dust;
						tmparr[i][j] -= dust;
					}
				}
			}
		}

		// 확산 적용
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				arr[i][j] += tmparr[i][j];
			}
		}

		// 배열 돌리기
		// 위쪽: 반시계
		// 왼쪽줄
		for (int i = ar1 - 1; i > 0; --i) arr[i][0] = arr[i - 1][0];
		// 윗줄
		for (int i = 0; i < c - 1; ++i) arr[0][i] = arr[0][i + 1];
		// 오른쪽줄
		for (int i = 1; i <= ar1; ++i) arr[i - 1][c - 1] = arr[i][c - 1];
		// 아랫줄
		for (int i = c - 1; i > 1; --i) arr[ar1][i] = arr[ar1][i - 1];
		// 정화된 부분
		arr[ar1][1] = 0;

		// 아래쪽: 반시계
		// 왼쪽줄
		for (int i = ar2 + 1; i < r - 1; ++i) arr[i][0] = arr[i + 1][0];
		// 아랫줄
		for (int i = 0; i < c - 1; ++i) arr[r - 1][i] = arr[r - 1][i + 1];
		// 오른쪽줄
		for (int i = r - 1; i >= ar2; --i) arr[i][c - 1] = arr[i - 1][c - 1];
		// 윗줄
		for (int i = c - 1; i > 1; --i) arr[ar2][i] = arr[ar2][i - 1];
		// 정화된 부분
		arr[ar2][1] = 0;

	}
	
	int ans = 0;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (arr[i][j] != -1) ans += arr[i][j];
		}
	}

	cout << ans;

	return 0;
}
