#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15128 Congruent Numbers
	// 수학
	long long p1, q1, p2, q2;
	cin >> p1 >> q1 >> p2 >> q2;
	cout << (p1 * p2 % (q1 * q2 * 2) == 0);

	return 0;
}
