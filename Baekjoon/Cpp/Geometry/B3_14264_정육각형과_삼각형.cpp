#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14264 정육각형과 삼각형
	// 기하학
	double l;
	cin >> l;

	cout << fixed;
	cout.precision(9);

	// 삼각비
	cout << sqrt(3) * l * l / 4;

	return 0;
}
