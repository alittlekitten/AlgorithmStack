#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21612 Boiling Water
	// 수학
	int b;
	cin >> b;
	int p = b * 5 - 400;
	cout << p << '\n';
	if (p < 100) cout << 1;
	else if (p > 100) cout << -1;
	else cout << 0;

	return 0;
}
