#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35455 10002221점
	// 수학
	int t, n, s;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n >> s;

		if (s == 10000000 + n) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
