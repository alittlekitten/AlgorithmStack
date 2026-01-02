#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30143 Cookie Piles
	// 수학
	int t, n, a, d;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n >> a >> d;
		int sum = 0;
		for (int j = 0; j < n; ++j) {
			sum += a + d * j;
		}
		cout << sum << '\n';
	}

	return 0;
}
