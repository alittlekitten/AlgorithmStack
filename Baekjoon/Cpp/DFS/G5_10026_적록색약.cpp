#include <iostream>
#include <string.h>

using namespace std;

char grid[100][100];
bool chk[100][100] = { false, };

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int n, int x, int y) {
	chk[x][y] = true;
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (!chk[nx][ny] && grid[x][y] == grid[nx][ny]) dfs(n, nx, ny);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 10026 적록색약 DFS
	int n;
	char input;
	int answer1 = 0; // 일반
	int answer2 = 0; // 적록색약

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> input;
			grid[i][j] = input;
		}
	}

	// 적록색약이 아닌 경우
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (!chk[i][j]) {
				dfs(n, i, j);
				answer1++;
			}
			
		}
	}

	memset(chk, false, sizeof(chk)); // chk 초기화

	// 적록색약인 경우
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (grid[i][j] == 'G') grid[i][j] = 'R';
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (!chk[i][j]) {
				dfs(n, i, j);
				answer2++;
			}
		}
	}

	cout << answer1 << " " << answer2;

	return 0;
}
