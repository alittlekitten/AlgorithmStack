#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35097 2025
	// 수학
	long long n;
	while (cin >> n) {
		if (n == 0) break;
		cout << (n * (n + 1) / 2) * (n * (n + 1) / 2) << '\n';
	}

	return 0;
}
