#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34437 Number Reduction
	// 수학
	int n;
	cin >> n;

	int ans = 0;
	while (n != 1) {
		if (n % 2 == 0) n /= 2;
		else n = 3 * n + 1;
		++ans;
	}

	cout << ans;

	return 0;
}
