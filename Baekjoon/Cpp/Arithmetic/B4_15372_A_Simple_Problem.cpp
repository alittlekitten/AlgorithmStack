#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15372 A Simple Problem.
	// 수학
	long long t, n;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n;
		cout << n * n << '\n';
	}

	return 0;
}
