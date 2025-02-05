#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27111 출입 기록
	// 구현
	int n, a, b;
	int arr[200001] = { 0 };
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;

		if (b) {
			if (arr[a]) ++ans;
			else arr[a] = 1;
		}
		else {
			if (!arr[a]) ++ans;
			else arr[a] = 0;
		}
	}

	for (int i = 1; i < 200001; ++i) ans += arr[i];

	cout << ans;

	return 0;
}
