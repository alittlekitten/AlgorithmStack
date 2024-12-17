#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8321 Tables
	// 그리디
	int n, k, s;
	int arr[1000] = { 0 };
	cin >> n >> k >> s;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n, greater<>());
	
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += arr[i];
		if (sum >= k * s) {
			cout << i + 1;
			break;
		}
	}

	return 0;
}
