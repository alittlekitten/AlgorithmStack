#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10811 바구니 뒤집기
	// 구현
	int n, m, a, b;
	int arr[101] = { 0 };
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) arr[i] = i;

	while (m--) {
		cin >> a >> b;

		for (int i = 0; i <= (b - a) / 2; ++i) {
			swap(arr[a + i], arr[b - i]);
		}
	}

	for (int i = 1; i <= n; ++i) cout << arr[i] << ' ';

	return 0;
}
