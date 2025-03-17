#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14864 줄서기
	// 수학
	int n, m, x, y;
	int arr[100001] = { 0 };
	int chk[100001] = { 0 };
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) arr[i] = i;
	for (int i = 1; i <= m; ++i) {
		cin >> x >> y;
		arr[x]++;
		arr[y]--;
	}

	for (int i = 1; i <= n; ++i) {
		if (chk[arr[i]] == 1) {
			cout << -1;
			return 0;
		}
		chk[arr[i]] = 1;
	}

	for (int i = 1; i <= n; ++i) cout << arr[i] << " ";

	return 0;
}
