#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n;
int arr[9][9];
int ans[9][9];
bool fin = false;
vector<pair<int, int>> v;

bool chk(int r, int c, int n) {
	// 같은 줄에 있는지
	for (int i = 0; i < 9; ++i) {
		if (n == arr[i][c]) return false;
		if (n == arr[r][i]) return false;
	}
	// 같은 네모에 있는지
	int rr = 3 * (r / 3);
	int cc = 3 * (c / 3);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (arr[rr + i][cc + j] == n) return false;
		}
	}

	return true;
}

void dfs(int n) {
	if (fin) return;
	// 끝나는 조건
	if (n == v.size()) {
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				ans[i][j] = arr[i][j];
			}
		}
		fin = true;
		return;
	}

	int r = v[n].first;
	int c = v[n].second;

	for (int i = 1; i <= 9; ++i) {
		if (chk(r, c, i)) {
			arr[r][c] = i;
			dfs(n + 1);
			arr[r][c] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2239 스도쿠 - 2580과 사실상 같은 문제
	// 백트래킹

	string s;
	for (int i = 0; i < 9; ++i) {
		cin >> s;
		for (int j = 0; j < 9; ++j) {
			arr[i][j] = s[j] - '0';
			if (arr[i][j] == 0) v.push_back(make_pair(i, j));
		}
	}

	dfs(0);

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cout << ans[i][j];
		}
		cout << '\n';
	}

	return 0;
}
