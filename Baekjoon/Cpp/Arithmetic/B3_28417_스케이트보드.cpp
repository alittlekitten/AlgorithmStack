#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28417 스케이트보드
	// 수학
	int n;
	int arr1[2] = { 0 };
	int arr2[5] = { 0 };
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr1[0] >> arr1[1] >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3] >> arr2[4];
		sort(arr1, arr1 + 2);
		sort(arr2, arr2 + 5);
		if (arr1[1] + arr2[3] + arr2[4] > ans) ans = arr1[1] + arr2[3] + arr2[4];
	}
	cout << ans;

	return 0;
}
