#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5355 화성 수학
	// 구현
	int t;
	double input;
	char c;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> input;

		while (1) {
			cin.get(c);
			if (c == '\n') break;
			else if (c == '@') input *= 3;
			else if (c == '%') input += 5;
			else if (c == '#') input -= 7;
		}
		cout << fixed;
		cout.precision(2);
		cout << input << '\n';
	}

	return 0;
}
