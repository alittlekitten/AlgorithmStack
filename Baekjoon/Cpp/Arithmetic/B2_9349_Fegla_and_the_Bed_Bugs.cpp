#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9349 Fegla and the Bed Bugs
	// 수학
	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> k >> n;
		cout << (k - n) / (n - 1) << '\n';
	}

	return 0;
}
