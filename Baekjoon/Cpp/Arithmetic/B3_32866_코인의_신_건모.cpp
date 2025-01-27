#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32866 코인의 신 건모
	// 수학
	double n, x;
	cin >> n >> x;
	double tmp = n - n * (x / 100.0);
	double ans = n / tmp - 1;

	cout << fixed;
	cout.precision(6);
	cout << ans * 100;

	return 0;
}
