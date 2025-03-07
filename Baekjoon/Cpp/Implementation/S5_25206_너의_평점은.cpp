#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25206 너의 평점은
	// 구현
	string s1, s2;
	double d;

	double avg = 0.0;
	double ans = 0.0;

	for (int i = 0; i < 20; ++i) {
		cin >> s1 >> d >> s2;

		if (s2 == "A+") avg += (4.5 * d);
		else if (s2 == "A0") avg += (4.0 * d);
		else if (s2 == "B+") avg += (3.5 * d);
		else if (s2 == "B0") avg += (3.0 * d);
		else if (s2 == "C+") avg += (2.5 * d);
		else if (s2 == "C0") avg += (2.0 * d);
		else if (s2 == "D+") avg += (1.5 * d);
		else if (s2 == "D0") avg += (1.0 * d);
		else if (s2 == "F") avg += (0.0 * d);
		else continue;

		ans += d;
	}

	cout.precision()
	cout << avg / ans;

	return 0;
}
