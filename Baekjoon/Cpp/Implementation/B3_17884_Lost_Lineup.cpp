#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17884 Lost Lineup
	// 구현
	int n, d;
	cin >> n;

	int arr[101] = { 0 };
	arr[1] = 1;

	for (int i = 1; i < n; ++i) {
		cin >> d;
		arr[d + 2] = i + 1;
	}

	for (int i = 1; i <= n; ++i) cout << arr[i] << " ";

	return 0;
}
