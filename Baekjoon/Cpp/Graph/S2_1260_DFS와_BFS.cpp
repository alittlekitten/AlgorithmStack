#include <iostream>
#include <queue>
using namespace std;

bool arr[1001][1001];
bool chk[1001];

void dfs(int n, int m, int v) {
	chk[v] = true;
	cout << v << " ";
	for (int i = 1; i <= n; ++i) {
		if (chk[i] == false && arr[v][i] == true) dfs(n, m, i);
	}
	
}

void bfs(int n, int m, int v) {
	queue<int> q;
	q.push(v);
	chk[v] = true;
	cout << v << " ";
	
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();

		for (int i = 1; i <= n; ++i) {
			if (chk[i] == false && arr[tmp][i] == true) {
				q.push(i);
				chk[i] = true;
				cout << i << " ";
			}
		}
	}
}

void reset() {
	for (int i = 0; i < 1001; ++i) {
		chk[i] = false;
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// DFS는 스택이나 재귀
	// BFS는 큐
	
	int n, m, v;
	cin >> n >> m >> v;

	int input1, input2;
	
	for (int i = 0; i < m; ++i) {
		cin >> input1 >> input2;
		arr[input1][input2] = true;
		arr[input2][input1] = true;
	}

	dfs(n, m, v);
	reset();
	bfs(n, m, v);

	return 0;
}
