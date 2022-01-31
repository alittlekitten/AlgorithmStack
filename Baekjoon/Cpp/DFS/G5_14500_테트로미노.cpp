#include <iostream>
using namespace std;

int arr[500][500];
bool visited[500][500];
int maxNum = 0;
int n, m;

// 위, 오른쪽, 아래, 왼쪽 순
const int dr[4] = { -1, 0, 1 ,0 };
const int dc[4] = { 0, 1, 0, -1 };

void DFS(int r, int c, int sum, int cnt) { // 행, 열, 합, 카운트
	if (cnt == 4) {
		if (sum > maxNum) maxNum = sum;
		return;
	}
	
	if (r < 0 || r >= n || c < 0 || c >= m) return;
	
	if (visited[r][c] == true) return;

	visited[r][c] = true; // 모든 경우의 수를 체크할 것이기 때문에 true처리

	for (int i = 0; i < 4; ++i){
		DFS(r + dr[i], c + dc[i], sum + arr[r][c], cnt + 1);
	}

	visited[r][c] = false; // 다시 초기화
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 14500 테트로미노
	// DFS..??
	int tmp;
	
	cin >> n >> m;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			DFS(i, j, 0, 0);

			// ㅗ 모양은 DFS로 계산 불가... (연속으로 3칸 가는게 아니라 중간에 가는 모양이므로..
			// 그래서 가로와 세로로 나눠서 가로 3개에 중간에서 
			if (j + 2 < m) {
				int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
				if (i - 1 >= 0) {
					if (sum + arr[i - 1][j + 1] > maxNum) maxNum = sum + arr[i - 1][j + 1];
				}
				if (i + 1 < n) {
					if (sum + arr[i + 1][j + 1] > maxNum) maxNum = sum + arr[i + 1][j + 1];
				}
			}
			if (i + 2 < n) {
				int sum = arr[i][j] + arr[i + 1][j] + arr[i + 2][j];
				if (j - 1 >= 0) {
					if (sum + arr[i + 1][j - 1] > maxNum) maxNum = sum + arr[i + 1][j - 1];
				}
				if (j + 1 < m) {
					if (sum + arr[i + 1][j + 1] > maxNum) maxNum = sum + arr[i + 1][j + 1];
				}
			}
		}
	}

	cout << maxNum;

	return 0;
}
