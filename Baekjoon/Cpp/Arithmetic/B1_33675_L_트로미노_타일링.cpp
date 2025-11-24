#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33675 L-트로미노 타일링
	// 수학
	int t, n;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n;

		if (n % 2) cout << 0 << '\n';
		else {
			long long tmp = 1;
			for (int j = 0; j < n / 2; ++j) tmp *= 2;
			cout << tmp << '\n';
		}
	}

	return 0;
}
