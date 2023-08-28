#include <iostream>
using namespace std;

long long fac(int n) {
	long long ans = 1;
	for (int i = 2; i <= n; ++i) ans *= i;
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28352 10!
	// 수학
	int n;
	cin >> n;

	long long sec = 7 * 24 * 60 * 60;
	cout << fac(n) / sec;

	return 0;
}
