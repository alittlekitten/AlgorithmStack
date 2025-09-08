#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25858 Divide the Cash
	// 수학
	int n, d;
	int arr[30] = { 0 };
	cin >> n >> d;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < n; ++i) cout << d * arr[i] / sum << '\n';

	return 0;
}
