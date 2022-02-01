#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int arr[25][25];
bool visited[25][25];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 2667 단지번호붙이기
	// DFS
	// 이번엔 재귀함수가 아닌 stack으로 풀어보자!

	int n;
	string str;
	stack<pair<int, int>> s;
	vector<int> v;

	const int dr[4] = { -1, 0, 1, 0 };
	const int dc[4] = { 0, 1, 0, -1 };

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> str;
		for (int j = 0; j < n; ++j) {
			arr[i][j] = str[j] - '0';
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int cnt = 0;
			if (arr[i][j] && !visited[i][j]) {
				s.push(make_pair(i, j));
				visited[i][j] = true;
				cnt++;
			}
			while (!s.empty()) {
				int r = s.top().first;
				int c = s.top().second;
				s.pop();
				for (int k = 0; k < 4; ++k) {
					if (r + dr[k] < 0 || r + dr[k] >= n || c + dc[k] < 0 || c + dc[k] >= n) continue;
					if (arr[r + dr[k]][c + dc[k]] && !visited[r + dr[k]][c + dc[k]]) {
						s.push(make_pair(r + dr[k], c + dc[k]));
						visited[r + dr[k]][c + dc[k]] = true;
						cnt++;
					}
				}
			}
			if (cnt) v.push_back(cnt);
		}
	}

	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << '\n';
	}

	return 0;
}
