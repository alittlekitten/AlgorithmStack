#include <iostream>
using namespace std;

int n, len, k, ans;
int arr[3];

void dfs(int a) {
	if (n < a) return;
	ans = max(ans, a);
	a *= 10;
	for (int i = 0; i < len; ++i) dfs(a + arr[i]);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18511 큰 수 구성하기
	// DFS
	cin >> n >> len;
	
	for (int i = 0; i < len; ++i) cin >> arr[i];

	dfs(0);
	cout << ans;

	return 0;
}
