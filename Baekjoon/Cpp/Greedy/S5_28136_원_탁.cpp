#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28136 원, 탁!
	// 그리디
	int n;
	int arr[1000001] = { 0 };
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	arr[n] = arr[0];
	for (int i = 0; i < n; ++i) {
		if (arr[i] >= arr[i + 1]) ++ans;
	}
	cout << ans;

	return 0;
}
