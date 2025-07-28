#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13225 Divisors
	// 브루트포스
	int n, input;
	cin >> n;

	while (n--) {
		int ans = 0;
		cin >> input;

		for (int i = 1; i <= input; ++i) {
			if (input % i == 0) ++ans;
		}
		cout << input << " " << ans << '\n';
	}

	return 0;
}
