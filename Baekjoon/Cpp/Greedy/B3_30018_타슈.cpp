#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30018 타슈
	// 그리디
	int n;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr1[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> arr2[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (arr1[i] > arr2[i]) ans += arr1[i] - arr2[i];
	}

	cout << ans;

	return 0;
}
