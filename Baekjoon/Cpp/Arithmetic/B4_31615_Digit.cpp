#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31615 桁 (Digit)
	// 수학
	int a, b;
	cin >> a >> b;
	if (a + b < 10) cout << 1;
	else if (a + b < 100) cout << 2;
	else cout << 3;

	return 0;
}
