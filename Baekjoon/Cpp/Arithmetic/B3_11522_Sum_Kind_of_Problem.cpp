#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11522 Sum Kind of Problem
	// 수학
	int p, k, n;
	cin >> p;

	for (int i = 0; i < p; ++i) {
		cin >> k >> n;
		cout << k << " " << n * (n + 1) / 2 << " " << n * n << " " << n * (n + 1) << '\n';
	}

	return 0;
}
