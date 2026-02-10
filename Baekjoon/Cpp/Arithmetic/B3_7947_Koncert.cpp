#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7947 Koncert
	// 수학
	int z, r, g, b;
	cin >> z;

	for (int i = 0; i < z; ++i) {
		int sumR = 0;
		int sumG = 0;
		int sumB = 0;

		for (int j = 0; j < 10; ++j) {
			cin >> r >> g >> b;
			sumR += r;
			sumG += g;
			sumB += b;
		}

		cout << round((double)sumR / 10) << " " << round((double)sumG / 10) << " " << round((double)sumB / 10) << '\n';
	}

	return 0;
}
