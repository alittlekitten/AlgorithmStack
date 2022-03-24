#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int arr[101][101];
bool chk[101][101];
int n;
int maxSafe = 0;
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

void bfs(int minV, int maxV) {
	queue<pair<int, int>> q;
	int cnt = 0;
	
	// 하나도 안잠긴 경우를 생각하기 위해 minV - 1부터 시작
	for (int t = minV - 1; t <= maxV; ++t) {
		while (!q.empty()) q.pop();
		memset(chk, 0, sizeof(chk));
		cnt = 0;
		// 물에 잡긴 곳 처리
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (arr[i][j] <= t) chk[i][j] = true;
			}
		}
		// 횟수세기
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (!chk[i][j]) {
					chk[i][j] = true;
					q.push(make_pair(i, j));
					cnt++;
					while (!q.empty()) {
						int r = q.front().first;
						int c = q.front().second;
						q.pop();
						// 사방 확인
						for (int k = 0; k < 4; ++k) {
							int rr = r + dr[k];
							int cc = c + dc[k];
							if (rr < 0 || rr >= n || cc < 0 || cc >= n) continue;
							if (!chk[rr][cc]) {
								chk[rr][cc] = true;
								q.push(make_pair(rr, cc));
							}
						}
					}
				}
			}
		}
		if (cnt > maxSafe) maxSafe = cnt;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2468 안전 영역
	// bfs
	int maxV = 0;
	int minV = 101;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] > maxV) maxV = arr[i][j];
			if (arr[i][j] < minV) minV = arr[i][j];
		}
	}

	bfs(minV, maxV);
	cout << maxSafe;

	return 0;
}
