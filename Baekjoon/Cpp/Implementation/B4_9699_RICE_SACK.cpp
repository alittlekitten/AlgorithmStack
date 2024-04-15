#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 9699 RICE SACK
	// 구현
	int n;
	int w[5] = { 0 };
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < 5; ++j) cin >> w[j];
		int maxWeight = *max_element(w, w + 5);
		cout << "Case #" << i << ": " << maxWeight << '\n';
	}

	return 0;
}
