#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34412 13 Floors
	// 수학
	int x;
	cin >> x;

	if (x < 13) cout << x;
	else cout << x + 1;

	return 0;
}
