#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31609 現れている数字 (Appearing Numbers)
	// 구현
	int n, a;
	int arr[10] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		++arr[a];
	}

	for (int i = 0; i < 10; ++i) {
		if (arr[i]) cout << i << '\n';
	}

	return 0;
}
