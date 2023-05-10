#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20215 Cutting Corners
	// 수학
	double w, h;
	cin >> w >> h;
	double r = w + h;
	double d = sqrt(w * w + h * h);
	cout << fixed;
	cout.precision(9);
	cout << r - d;
	
	return 0;
}
