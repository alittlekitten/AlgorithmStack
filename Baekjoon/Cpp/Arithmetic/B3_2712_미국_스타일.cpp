#include <iostream>
using namespace std;

double w;
string s;

double conv() {
	if (s == "kg") {
		s = "lb";
		return w * 2.2046;
	}
	if (s == "lb") {
		s = "kg";
		return w * 0.4536;
	}
	if (s == "l") {
		s = "g";
		return w * 0.2642;
	}
	if (s == "g") {
		s = "l";
		return w * 3.7854;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2712 미국 스타일
	// 수학
	int t;
	cin >> t;
	while (t--) {
		cin >> w >> s;
		cout.precision(4);
		cout << fixed;
		cout << conv() << " " << s;
	}

	return 0;
}
