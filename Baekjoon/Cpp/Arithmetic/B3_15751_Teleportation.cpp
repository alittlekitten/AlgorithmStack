#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15751 Teleportation
	// 수학
	int ab[2], xy[2];
	cin >> ab[0] >> ab[1] >> xy[0] >> xy[1];
	sort(ab, ab + 2);
	sort(xy, xy + 2);
	cout << min(ab[1] - ab[0], abs(ab[0] - xy[0]) + abs(ab[1] - xy[1]));

	return 0;
}
