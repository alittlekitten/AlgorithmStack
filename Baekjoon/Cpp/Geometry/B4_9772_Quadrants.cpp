#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9772 Quadrants
	// 수학, 기하학
	double x, y;

	while (cin >> x >> y) {
		if (x == 0 && y == 0) {
			cout << "AXIS";
			break;
		}

		if (x == 0 || y == 0) cout << "AXIS";
		else if (x > 0 && y > 0) cout << "Q1";
		else if (x < 0 && y > 0) cout << "Q2";
		else if (x < 0 && y < 0) cout << "Q3";
		else if (x > 0 && y < 0) cout << "Q4";
		cout << '\n';
	}

	return 0;
}
