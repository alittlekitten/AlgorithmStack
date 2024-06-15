#include <iostream>
using namespace std;

long long fac(int n) {
	long long res = 1;
	while (n) {
		res *= n;
		--n;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30993 자동차 주차
	// 수학
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	cout << fac(n) / (fac(a) * fac(b) * fac(c));

	return 0;
}
