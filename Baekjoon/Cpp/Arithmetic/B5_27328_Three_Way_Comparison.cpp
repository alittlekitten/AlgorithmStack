#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27328 Three-Way Comparison
	// 수학
	int a, b;
	cin >> a >> b;
	if (a > b) cout << 1;
	else if (a < b) cout << -1;
	else cout << 0;

	return 0;
}
