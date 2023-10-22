#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28455 Union Maplestory
	// 정렬
	int n;
	int arr[100] = { 0 };
	int ans = 0;
	int sumLevel = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n, greater<>());

	for (int i = 0; i < 42; ++i) {
		if (arr[i] >= 250) ans += 5;
		else if (arr[i] >= 200) ans += 4;
		else if (arr[i] >= 140) ans += 3;
		else if (arr[i] >= 100) ans += 2;
		else if (arr[i] >= 60) ++ans;

		sumLevel += arr[i];
	}

	cout << sumLevel << " " << ans;

	return 0;
}
