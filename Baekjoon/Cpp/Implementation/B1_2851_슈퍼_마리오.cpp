#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2851 슈퍼 마리오
	// 구현
	int arr[10] = { 0 };
	int ans = 0;
	for (int i = 0; i < 10; ++i) cin >> arr[i];

	for (int i = 0; i < 10; ++i) {
		if (abs(100 - ans) >= abs(100 - (ans + arr[i]))) ans += arr[i];
		else break;
	}

	cout << ans << endl;

	return 0;
}
