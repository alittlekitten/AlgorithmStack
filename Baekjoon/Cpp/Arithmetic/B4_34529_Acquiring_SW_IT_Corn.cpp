#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34529 Acquiring SW-IT Corn
	// 수학
	int x, y, z, u, v, w;
	cin >> x >> y >> z >> u >> v >> w;
	cout << u / 100 * x + v / 50 * y + w / 20 * z;

	return 0;
}
