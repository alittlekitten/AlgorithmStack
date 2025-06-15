#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26566 Pizza
	// 기하학
	int n, a1, p1, r1, p2;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a1 >> p1 >> r1 >> p2;

		double s = (double)a1 / p1;
		double w = (double)(3.14 * pow(r1, 2)) / p2;
		if (s > w) cout << "Slice of pizza" << '\n';
		else cout << "Whole pizza" << '\n';
	}

	return 0;
}
