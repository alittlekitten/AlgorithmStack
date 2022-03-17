#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[9][9];
int ans[9][9];
bool fin = false;
vector<pair<int, int>> v;

bool chk(int r, int c, int num) {
	// 가로세로
	for (int i = 0; i < 9; ++i) {
		if (num == arr[i][c]) return false;
		if (num == arr[r][i]) return false;
	}
	// 중간네모
	int rr = 3 * (r / 3);
	int cc = 3 * (c / 3);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (num == arr[rr + i][cc + j]) return false;
		}
	}
	return true;
}

void dfs(int cnt) {
	if (fin) return;
	if (cnt == v.size()) {
		for (int i = 0; i < 9; ++i) {
			for (int j = 0;j < 9; ++j) {
				ans[i][j] = arr[i][j];
			}
		}
		fin = true;
		return;
	}

	int r = v[cnt].first;
	int c = v[cnt].second;

	for (int i = 1; i <= 9; ++i) {
		if (chk(r, c, i)) {
			arr[r][c] = i;
			dfs(cnt + 1);
			arr[r][c] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1799 스도쿠
	// 백트래킹
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				v.push_back(make_pair(i, j));
			}
		}
	}

	dfs(0);

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cout << ans[i][j] << " ";
		}
		cout << '\n';
	}
	
    return 0;
}
