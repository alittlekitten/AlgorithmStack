#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2965 캥거루 세마리
	// 수학
	int arr[3] = { 0 };
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	cout << max(arr[2] - arr[1], arr[1] - arr[0]) - 1;

	return 0;
}
