#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33166 鉄道旅行 3 (Railway Trip 3)
	// 수학
	int p, q, a, b;
	cin >> p >> q >> a >> b;
	if (q > p) cout << p * a + (q - p) * b;
	else cout << q * a;

	return 0;
}
