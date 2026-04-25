#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32327 Dusa And The Yobis
	// 수학
	int d, x;
	cin >> d;

	while (cin >> x) {
		if (x < d) d += x;
		else break;
	}

	cout << d;

	return 0;
}
