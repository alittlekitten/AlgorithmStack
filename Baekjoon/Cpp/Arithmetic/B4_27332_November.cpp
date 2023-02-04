#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27332 November
	// 수학
	int a, b;
	cin >> a >> b;
	if (a + b * 7 > 30) cout << 0;
	else cout << 1;

	return 0;
}
