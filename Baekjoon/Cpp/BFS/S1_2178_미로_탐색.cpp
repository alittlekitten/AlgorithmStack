#include <iostream>
#include <queue>
#include <string>
using namespace std;

int arr[100][100];
int visited[100][100];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 2178 미로 탐색
	// BFS

	int n, m;
	string str;
	queue<pair<int, int>> q;

	const int dr[4] = { -1, 0, 1, 0 };
	const int dc[4] = { 0, 1, 0, -1 };

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		for (int j = 0; j < m; ++j) {
			arr[i][j] = str[j] - '0';
		}
	}

	q.push(make_pair(0, 0));
	visited[0][0] = 1;
	while (!q.empty()) {
		int r = q.front().first;
		int c = q.front().second;
		q.pop();
		if (r == n - 1 && c == m - 1) break;
		for (int i = 0; i < 4; ++i) {
			if (r + dr[i] < 0 || r + dr[i] >= n || c + dc[i] < 0 || c + dc[i] >= m) continue;
			if (arr[r + dr[i]][c + dc[i]] && !visited[r + dr[i]][c + dc[i]]) {
				visited[r + dr[i]][c + dc[i]] = visited[r][c] + 1;
				q.push(make_pair(r + dr[i], c + dc[i]));
			}
		}
	}

	cout << visited[n - 1][m - 1];

	return 0;
}
