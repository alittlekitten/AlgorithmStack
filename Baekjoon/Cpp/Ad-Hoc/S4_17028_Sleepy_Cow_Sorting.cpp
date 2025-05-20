#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17028 Sleepy Cow Sorting
	// 애드혹
	int n;
	int arr[101] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	int ans = n - 1;
	for (int i = n - 2; i >= 0; --i) {
		if (arr[i] > arr[i + 1]) break;
		--ans;
	}
	cout << ans;

	return 0;
}
