#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21312 홀짝 칵테일
	// 수학
	int arr[3] = { 0 };
	int ans = 1;
	bool chk = false;

	for (int i = 0; i < 3; ++i) {
		cin >> arr[i];
		if (arr[i] % 2) {
			ans *= arr[i];
			chk = true;
		}
	}

	if (chk) cout << ans;
	else cout << arr[0] * arr[1] * arr[2];

	return 0;
}
