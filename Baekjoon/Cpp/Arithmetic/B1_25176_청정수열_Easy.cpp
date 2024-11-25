#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25176 청정수열(Easy)
	// 수학
	int n;
	cin >> n;

	int ans = 1;
	for (int i = 1; i <= n; ++i) ans *= i;
	cout << ans;

	return 0;
}
