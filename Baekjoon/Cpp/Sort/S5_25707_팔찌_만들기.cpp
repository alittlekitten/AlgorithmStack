#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25707 팔찌 만들기
	// 정렬
	int n;
	int arr[1001] = { 0 };
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 1; i < n; ++i) {
		ans += abs(arr[i] - arr[i - 1]);
	}
	ans += abs(arr[0] - arr[n - 1]);
	cout << ans;

	return 0;
}
