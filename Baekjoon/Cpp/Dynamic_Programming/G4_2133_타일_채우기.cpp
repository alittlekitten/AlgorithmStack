#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2133 타일 채우기
	// DP
	int n;
	cin >> n;

	int arr[31] = { 0 };
	arr[0] = 1;
	arr[2] = 3;

	for (int i = 3; i <= n; ++i) {
		if (i % 2) arr[i] = 0;
		else {
			for (int j = 2; j <= n; j += 2) {
				if (j == 2) arr[i] = arr[i - j] * arr[2];
				else if ((i - j) >= 0) arr[i] += arr[i - j] * 2;
			}
		}
	}
	cout << arr[n];

	return 0;
}
