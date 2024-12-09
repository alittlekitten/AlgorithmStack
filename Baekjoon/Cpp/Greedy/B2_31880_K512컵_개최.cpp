#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31880 K512컵 개최!
	// 수학, 그리디
	int n, m, input;
	cin >> n >> m;

	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		ans += input;
	}
	for (int i = 0; i < m; ++i) {
		cin >> input;
		if (input != 0) ans *= input;
	}
	cout << ans;

	return 0;
}
