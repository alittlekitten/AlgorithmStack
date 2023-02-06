#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27433 팩토리얼 2
	// 수학
	long long n;
	cin >> n;
	long long ans = 1;
	for (long long i = 2; i <= n; ++i) ans *= i;
	cout << ans;

	return 0;
}
