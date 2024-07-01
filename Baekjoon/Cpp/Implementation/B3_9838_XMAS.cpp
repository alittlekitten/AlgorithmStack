#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9838 XMAS
	// 구현
	int n, x;
	int arr[20001] = { 0 };
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> x;
		arr[x] = i;
	}

	for (int i = 1; i <= n; ++i) {
		cout << arr[i] << '\n';
	}

	return 0;
}
