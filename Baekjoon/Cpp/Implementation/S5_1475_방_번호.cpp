#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1475 방 번호
	// 구현
	int n;
	int arr[9] = { 0 };
	int ans = 0;

	cin >> n;
	while (n > 0) {
		int tmp = n % 10;
		n /= 10;
		if (tmp == 9) ++arr[6];
		else ++arr[tmp];
	}

	arr[6] = (arr[6] + 1) / 2;

	for (int i = 0; i < 9; ++i) ans = max(ans, arr[i]);

	cout << ans;

	return 0;
}
