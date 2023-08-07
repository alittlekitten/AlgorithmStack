#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
int target[8];
bool visited[8];
set<vector<int>> s;

void backtrack(int cnt) {
	if (cnt == m) {
		vector<int> v;
		for (int i = 0; i < m; ++i) {
			v.push_back(target[i]);
		}
		s.insert(v);
	}
	else {
		for (int i = 0; i < n; ++i) {
			if (!visited[i]) {
				visited[i] = true;
				target[cnt] = arr[i];
				backtrack(cnt + 1);
				visited[i] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15649 N과 M (1)
	// 백트래킹
	cin >> n >> m;
	for (int i = 0; i < n; ++i) arr[i] = i + 1;
	sort(arr, arr + n);
	backtrack(0);

	for (vector<int> v : s) {
		for (int i : v) cout << i << " ";
		cout << '\n';
	}

	return 0;
}
