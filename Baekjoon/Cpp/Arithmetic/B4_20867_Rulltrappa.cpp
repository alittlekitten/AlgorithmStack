#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 20867 Rulltrappa
	// 수학
	int m, s, g, l, r;
	double a, b, ll, rr;
	cin >> m >> s >> g >> a >> b >> l >> r;
	double lwait = l / a;
	double rwait = r / b;
	ll = m % g ? m / g + 1 : m / g;
	rr = m % s ? m / s + 1 : m / s;
	if (lwait + ll < rwait + rr) cout << "friskus";
	else cout << "latmask";

	return 0;
}
