#include <iostream>
#include <algorithm>
using namespace std;

int col[15];
int n;
int total = 0;

bool chk(int x) {
	for (int i = 0; i < x; ++i) {
		if (col[i] == col[x] || abs(col[i] - col[x]) == x - i) // 같은라인, 대각선
			return false;
	}
	return true;
}

void queen(int x) {
	if (x == n) total++;
	else {
		for (int i = 0; i < n; ++i) {
			col[x] = i;
			if (chk(x)) queen(x + 1);
		}
	}
}

// 9663 N-Queen
// 백트래킹(DFS)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	queen(0);
	cout << total;

	return 0;
}
