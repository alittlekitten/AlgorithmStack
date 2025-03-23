#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18110 solved.ac
	// 정렬
	int n;
	int arr[300001] = { 0 };
	cin >> n;

	if (n == 0) cout << 0;
	else {
		for (int i = 0; i < n; ++i) cin >> arr[i];
		sort(arr, arr + n);

		int sum = 0;
		int idx = (int)round((double)n * 15 / 100);
		for (int i = idx; i < n - idx; ++i)sum += arr[i];

		cout << (int)round((double)sum / (n - 2 * idx));
	}
	
	return 0;
}
