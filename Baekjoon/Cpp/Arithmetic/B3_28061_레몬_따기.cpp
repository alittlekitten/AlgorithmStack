#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28061 레몬 따기
	// 수학
	int n;
	int arr[200000];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = max(ans, arr[i] - (n - i));
	}

	cout << ans;

	return 0;
}
