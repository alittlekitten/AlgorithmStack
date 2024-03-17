#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31611 火曜日 (Tuesday)
	// 수학
	int x;
	cin >> x;
	if ((x - 2) % 7) cout << 0;
	else cout << 1;

	return 0;
}
