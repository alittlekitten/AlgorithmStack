#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2985 세 수
	// 수학
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) cout << a << "+" << b << "=" << c;
	else if (a - b == c) cout << a << "-" << b << "=" << c;
	else if (a * b == c) cout << a << "*" << b << "=" << c;
	else if (a / b == c) cout << a << "/" << b << "=" << c;
	else if (a == b + c) cout << a << "=" << b << "+" << c;
	else if (a == b - c) cout << a << "=" << b << "-" << c;
	else if (a == b * c) cout << a << "=" << b << "*" << c;
	else if (a == b / c) cout << a << "=" << b << "/" << c;

	return 0;
}
