#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4892 색종이
	// 구현
	int a, b, c, d, e;
	int num = 1;

	while (1) {
		cin >> a;
		if (!a) break;
		b = 3 * a;
		if (b % 2) {
			cout << num << ". odd ";
			c = (b + 1) / 2;
		}
		else {
			cout << num << ". even ";
			c = b / 2;
		}
		d = 3 * c;
		e = d / 9;
		cout << e << '\n';
		++num;
	}

	return 0;
}
