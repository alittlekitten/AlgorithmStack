#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26545 Mathematics
	// 수학
	int n, input;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		ans += input;
	}
	cout << ans;

	return 0;
}
