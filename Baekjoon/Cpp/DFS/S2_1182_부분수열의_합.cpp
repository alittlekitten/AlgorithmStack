#include <iostream>
using namespace std;

int n, s;
int arr[20];
int ans = 0;

void dfs(int idx, int sum) {
	sum += arr[idx];
	if (sum == s) ++ans;
	for (int i = idx + 1; i < n; ++i) dfs(i, sum);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1182 부분수열의 합
	// DFS
	cin >> n >> s;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	for (int i = 0; i < n; ++i) dfs(i, 0);

	cout << ans;

	return 0;
}
