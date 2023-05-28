#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14182 Tax
	// 수학
	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		if (n <= 1000000) cout << n;
		else if (n <= 5000000) cout << (int)(n * 0.9);
		else cout << (int)(n * 0.8);
		cout << '\n';
	}

	return 0;
}
