#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17466 N! mod P (1)
	// 수학
	long long n, p;
	cin >> n >> p;

	long long ans = 1;
	while (n) {
		if (n == 0) break;
		ans = ans * n % p;
		--n;
	}
	cout << ans;

	return 0;
}
