#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16478 원의 분할
	// 기하학
	double p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout << p1 * p3 / p2;

	return 0;
}
