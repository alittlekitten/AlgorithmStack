#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 10865 친구 친구
	// 구현
	int n, m, a, b;
	int arr[100001] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		++arr[a];
		++arr[b];
	}
	for (int i = 1; i <= n; ++i) cout << arr[i] << '\n';

	return 0;
}
