#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21631 Checker
	// 수학
	long long w, b;
	cin >> w >> b;
	if (w >= b) cout << b;
	else cout << w + 1;

	return 0;
}
