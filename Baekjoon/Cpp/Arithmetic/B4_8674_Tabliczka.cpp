#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8674 Tabliczka
	// 수학
	long long a, b;
	cin >> a >> b;
	if (!(a % 2) || !(b % 2)) cout << 0;
	else cout << min(a, b);

	return 0;
}
