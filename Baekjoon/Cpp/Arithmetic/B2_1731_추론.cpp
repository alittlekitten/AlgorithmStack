#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1731 추론
	// 수학
	int n;
	int arr[51] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	if (arr[1] - arr[0] == arr[2] - arr[1]) cout << arr[n - 1] + arr[2] - arr[1];
	else cout << arr[n - 1] * (arr[1] / arr[0]);

	return 0;
}
