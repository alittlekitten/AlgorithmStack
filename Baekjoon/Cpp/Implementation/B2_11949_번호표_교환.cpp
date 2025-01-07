#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11949 번호표 교환
	// 구현
	int n, m;
	cin >> n >> m;

	int arr[101] = { 0 };
	for (int i = 1; i <= n; ++i) cin >> arr[i];

	for (int i = 1; i <= m; ++i) {
		for (int j = 1; j < n; ++j) {
			if (arr[j] % i > arr[j + 1] % i) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 1; i <= n; ++i) cout << arr[i] << '\n';

	return 0;
}
