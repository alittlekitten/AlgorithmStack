#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25591 푸앙이와 종윤이
	// 수학
	int x, y;
	cin >> x >> y;
	int a = 100 - x;
	int b = 100 - y;
	int c = 100 - (a + b);
	int d = a * b;
	int q = d / 100;
	int r = d % 100;
	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << " " << '\n' << c + q << " " << r << '\n';

	return 0;
}
