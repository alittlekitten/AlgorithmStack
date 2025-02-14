#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31432 소수가 아닌 수 3
	// 수학
	int n;
	int arr[10] = { 0 };

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	if (n == 1) {
		if (arr[0] == 0) {
			cout << "YES" << '\n' << 0;
			return 0;
		}
	}
	cout << "YES" << '\n' << arr[n - 1] * 111;

	return 0;
}
