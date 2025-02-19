#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15600 Boss Battle
	// 그리디
	int n;
	cin >> n;
	if (n <= 3) cout << 1;
	else cout << n - 2;

	return 0;
}
