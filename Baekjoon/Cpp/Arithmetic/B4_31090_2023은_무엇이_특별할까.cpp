#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31090 2023은 무엇이 특별할까?
	// 수학
	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;

		if ((n + 1) % (n % 100)) cout << "Bye" << '\n';
		else cout << "Good" << '\n';
	}

	return 0;
}
