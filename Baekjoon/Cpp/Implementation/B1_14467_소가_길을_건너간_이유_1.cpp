#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14467 소가 길을 건너간 이유 1
	// 구현
	int n, a, b;
	int arr[11] = { 0 };
	bool chk[11] = { 0 };
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (!chk[a]) {
			chk[a] = true;
			arr[a] = b;
		}
		if (chk[a] && arr[a] != b) {
			++ans;
			arr[a] = b;
		}
	}
	cout << ans;

	return 0;
}
