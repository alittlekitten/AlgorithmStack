#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10643 FUNGHI
	// 수학
	int arr[16] = { 0 };
	for (int i = 0; i < 8; ++i) {
		cin >> arr[i];
		arr[i + 8] = arr[i];
	}

	int ans = 0;
	for (int i = 0; i < 8; ++i) {
		if (arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] > ans) ans = arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3];
	}

	cout << ans;

	return 0;
}
