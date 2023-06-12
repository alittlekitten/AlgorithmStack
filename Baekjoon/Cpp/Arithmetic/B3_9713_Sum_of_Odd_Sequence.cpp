#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9713 Sum of Odd Sequence
	// 수학
	int q, n;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> n;
		n = (n + 1) / 2;
		cout << n * n << '\n';
	}

	return 0;
}
