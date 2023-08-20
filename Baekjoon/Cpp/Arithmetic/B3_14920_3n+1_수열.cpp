#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14920 3n+1 수열
	// 수학
	int n;
	int ans = 1;
	cin >> n;
	while (n != 1) {
		if (n % 2) n = 3 * n + 1;
		else n >>= 1;
		++ans;
	}
	cout << ans;

	return 0;
}
