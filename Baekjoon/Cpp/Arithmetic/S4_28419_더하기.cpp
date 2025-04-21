#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28419 더하기
	// 수학
	long long n, a;
	cin >> n;

	long long even = 0;
	long long odd = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (i % 2) odd += a;
		else even += a;
	}
	if (even > odd && n == 3) cout << -1;
	else cout << abs(odd - even);

	return 0;
}
