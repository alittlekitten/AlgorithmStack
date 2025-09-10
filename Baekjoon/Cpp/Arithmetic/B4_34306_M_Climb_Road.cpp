#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34306 M-Climb Road
	// 수학
	int n, w;
	cin >> w >> n;
	cout << 5280 * w / n;

	return 0;
}
