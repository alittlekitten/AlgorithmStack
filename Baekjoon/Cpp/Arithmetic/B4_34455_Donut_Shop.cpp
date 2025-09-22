#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34455 Donut Shop
	// 수학
	int d, e, q;
	char s;
	cin >> d >> e;
	for (int i = 0; i < e; ++i) {
		cin >> s >> q;
		if (s == '+') d += q;
		else d -= q;
	}

	cout << d;

	return 0;
}
