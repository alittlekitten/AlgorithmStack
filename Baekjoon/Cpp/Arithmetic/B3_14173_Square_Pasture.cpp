#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14173 Square Pasture
	// 수학
	int x1, x2, y1, y2, a1, a2, b1, b2;
	cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
	int a = max(a2, x2) - min(a1, x1);
	int b = max(b2, y2) - min(b1, y1);
	cout << pow(max(a, b), 2);

	return 0;
}
