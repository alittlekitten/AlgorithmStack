#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29751 삼각형
	// 수학
	double w, h;
	cin >> w >> h;
	cout << fixed;
	cout.precision(1);
	cout << w * h * 0.5;

	return 0;
}
