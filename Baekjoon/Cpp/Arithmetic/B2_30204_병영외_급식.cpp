#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 30204 병영외 급식
	// 수학
	int n, x, input;
	int ans = 0;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		ans += input;
	}

	if (ans % x) cout << 0;
	else cout << 1;

	return 0;
}
