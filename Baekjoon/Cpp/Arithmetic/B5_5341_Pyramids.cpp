#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5341 Pyramids
	// 수학
	int n;
	while (1) {
		cin >> n;
		if (n != 0) cout << n * (n + 1) / 2 << '\n';
		else break;
	}

	return 0;
}
