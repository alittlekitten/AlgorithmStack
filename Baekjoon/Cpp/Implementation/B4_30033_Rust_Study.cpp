#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30033 Rust Study
	// 구현
	int n, b;
	int ans = 0;
	int arr[1001];
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	for (int i = 0; i < n; ++i) {
		cin >> b;
		if (b >= arr[i]) ++ans;
	}

	cout << ans;

	return 0;
}
