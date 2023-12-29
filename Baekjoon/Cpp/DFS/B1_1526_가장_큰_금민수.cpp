#include <iostream>
using namespace std;

int n;
int ans = 0;

void dfs(int sum) {
	if (sum > n) return;
	dfs(sum * 10 + 4);
	dfs(sum * 10 + 7);
	if (ans < sum) ans = sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1526 가장 큰 금민수
	// DFS
	cin >> n;
	dfs(0);
	cout << ans;

	return 0;
}
