#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32306 Basketball Score
	// 수학
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int t1 = a + 2 * b + 3 * c;
	int t2 = d + 2 * e + 3 * f;
	if (t1 > t2) cout << 1;
	else if (t1 < t2) cout << 2;
	else cout << 0;

	return 0;
}
