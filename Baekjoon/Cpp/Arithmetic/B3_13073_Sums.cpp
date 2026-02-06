#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13073 Sums
	// 수학
	int t, n;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n;
		cout << n * (n + 1) / 2 << " " << n * n << " " << n * (n + 1) << '\n';
	}

	return 0;
}
