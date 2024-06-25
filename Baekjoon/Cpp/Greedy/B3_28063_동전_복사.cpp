#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28063 동전 복사
	// 그리디
	int n, x, y;
	cin >> n >> x >> y;

	if (n == 1) cout << 0;
	else cout << 4 - (x == 1 || x == n) - (y == 1 || y == n);

	return 0;
}
