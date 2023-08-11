#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10810 공 넣기
	// 구현
	int n, m, a, b, c;
	int arr[101] = { 0 };
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;
		for (int j = a; j <= b; ++j) arr[j] = c;
	}

	for (int i = 1; i <= n; i++) cout << arr[i] << ' ';

	return 0;
}
