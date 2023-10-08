#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9610 사분면
	// 수학
	int n, x, y;
	int q1 = 0;
	int q2 = 0;
	int q3 = 0;
	int q4 = 0;
	int axis = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		if (x == 0 || y == 0) ++axis;
		else if (x > 0 && y > 0) ++q1;
		else if (x < 0 && y > 0) ++q2;
		else if (x < 0 && y < 0) ++q3;
		else if (x > 0 && y < 0) ++q4;
	}
	cout << "Q1: " << q1 << '\n';
	cout << "Q2: " << q2 << '\n';
	cout << "Q3: " << q3 << '\n';
	cout << "Q4: " << q4 << '\n';
	cout << "AXIS: " << axis << '\n';

	return 0;
}
