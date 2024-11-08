#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26145 출제비 재분배
	// 수학
	int n, m, input;
	cin >> n >> m;

	int arr[2001] = { 0 };

	for (int i = 0; i < n; ++i) cin >> arr[i];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n + m; ++j) {
			cin >> input;
			arr[i] -= input;
			arr[j] += input;
		}
	}

	for (int i = 0; i < n + m; ++i) cout << arr[i] << " ";

	return 0;
}
