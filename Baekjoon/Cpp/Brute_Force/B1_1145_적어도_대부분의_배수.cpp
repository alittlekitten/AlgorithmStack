#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1145 적어도 대부분의 배수
	// 브루트포스
	int arr[5] = { 0 };
	int ans = 1;
	for (int i = 0; i < 5; ++i) cin >> arr[i];

	while (1) {
		int cnt = 0;
		for (int i = 0; i < 5; ++i) {
			if (ans >= arr[i] && ans % arr[i] == 0) ++cnt;
		}
		if (cnt >= 3) break;
		++ans;
	}

	cout << ans;

	return 0;
}
