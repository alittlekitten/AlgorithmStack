#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33179 Hezardastan's Annual Report
	// 구현
	int n, input;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		ans += (input + 1) / 2;
	}

	cout << ans;

	return 0;
}
