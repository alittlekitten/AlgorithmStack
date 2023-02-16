#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24079 Moving
	// 수학
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y - 0.5 < z) cout << 1;
	else cout << 0;

	return 0;
}
