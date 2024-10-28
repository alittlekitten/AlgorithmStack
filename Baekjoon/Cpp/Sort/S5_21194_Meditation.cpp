#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21194 Meditation
	// 정렬
	int n, k;
	int arr[100001] = { 0 };
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n, greater<>());

	int ans = 0;
	for (int i = 0; i < k; ++i) ans += arr[i];
	cout << ans;

	return 0;
}
