#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24416 알고리즘 수업 - 피보나치 수 1
	// 수학
	int n;
	int arr[41] = { 0 };
	arr[1] = 1;
	arr[2] = 1;

	cin >> n;

	for (int i = 3; i <= n; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n] << " " << n - 2;

	return 0;
}
