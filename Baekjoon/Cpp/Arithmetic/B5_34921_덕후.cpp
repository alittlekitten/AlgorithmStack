#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34921 덕후
	// 수학
	int a, t;
	cin >> a >> t;
	if (10 + 2 * (25 - a + t) > 0) cout << 10 + 2 * (25 - a + t);
	else cout << 0;

	return 0;
}
