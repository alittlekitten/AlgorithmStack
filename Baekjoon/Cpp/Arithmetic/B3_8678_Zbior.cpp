#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8678 Zbiór
	// 수학
	int z, a, b;
	cin >> z;

	while (z--) {
		cin >> a >> b;

		if (b % a == 0) cout << "TAK\n";
		else cout << "NIE\n";
	}

	return 0;
}
