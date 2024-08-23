#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10804 카드 역배치
	// 구현
	int a, b;
	int arr[21] = { 0 };
	for (int i = 1; i <= 20; ++i) arr[i] = i;

	for (int i = 0; i < 10; ++i) {
		cin >> a >> b;

		while (a < b) {
			int tmp = arr[a];
			arr[a++] = arr[b];
			arr[b--] = tmp;
		}
	}

	for (int i = 1; i <= 20; ++i) cout << arr[i] << ' ';

	return 0;
}
