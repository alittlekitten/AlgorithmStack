#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10864 친구
	// 구현
	int n, m, a, b;
	int arr[1001] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		++arr[a]; 
		++arr[b];
	}

	for (int i = 1; i <= n; ++i) cout << arr[i] << '\n';

	return 0;
}
