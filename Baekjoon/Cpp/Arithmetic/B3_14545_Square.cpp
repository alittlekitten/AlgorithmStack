#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14545 Square
	// 수학
	int n, input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		int ans = 0;
		for (int j = 1; j < input + 1; ++j) ans += j * j;
		cout << ans << '\n';
	}

	return 0;
}
