#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5235 Even Sum More Than Odd Sum
	// 수학
	int t, k, input;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int even = 0;
		int odd = 0;
		cin >> k;
		for (int j = 0; j < k; ++j) {
			cin >> input;
			if (input % 2) odd += input;
			else even += input;
		}
		if (even > odd) cout << "EVEN\n";
		else if (even < odd) cout << "ODD\n";
		else cout << "TIE\n";
	}

	return 0;
}
