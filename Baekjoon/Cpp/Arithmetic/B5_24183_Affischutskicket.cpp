#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 24183 Affischutskicket
	// 수학
	float a, b, c;
	cin >> a >> b >> c;
	float t = 0.229 * 0.324 * a * 2 + 0.297 * 0.42 * b * 2 + 0.21 * 0.297 * c;
	cout << t;

	return 0;
}
