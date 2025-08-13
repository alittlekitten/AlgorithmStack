#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9724 Perfect Cube
	// 수학
	int t, a, b;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << floor(cbrt(b)) - ceil(cbrt(a)) + 1 << '\n';
	}

	return 0;
}
