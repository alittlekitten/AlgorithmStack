#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2033 반올림
	// 수학
	int n;
	int m = 10;
	cin >> n;
	while (n > m) {
		int tmp = n % m;
		n -= tmp;
		if (tmp >= 5 * m / 10) n += m;
		m *= 10;
	}
	cout << n;

	return 0;
}
