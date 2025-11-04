#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31134 A Hero Named Magnus
	// 수학
	long long t, x;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> x;
		cout << x * 2 - 1 << '\n';
	}

	return 0;
}
