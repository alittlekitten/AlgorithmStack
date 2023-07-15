#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26532 acres
	// 수학
	int w, l;
	cin >> w >> l;

	double acres = (double)(w * l) / 4840.0;
	cout << ceil(acres / 5.0);

	return 0;
}
