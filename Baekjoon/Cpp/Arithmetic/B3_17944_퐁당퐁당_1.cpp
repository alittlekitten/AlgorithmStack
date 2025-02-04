#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17944 퐁당퐁당 1
	// 수학
	int n, t; 
	cin >> n >> t;

	int ans = 1;
	int tmp = 1;

	for (int i = 0; i < t - 1; ++i) {
		ans += tmp;
		if (ans == 1 || ans == 2 * n) tmp = -tmp;
	}

	cout << ans;

	return 0;
}
