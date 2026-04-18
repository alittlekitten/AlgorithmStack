#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24807 Math Homework
	// 수학
	int b, d, c, l;
	cin >> b >> d >> c >> l;

	bool chk = false;

	for (int x = 0; x <= l; ++x) {
		for (int y = 0; y <= l; ++y) {
			for (int z = 0; z <= l; ++z) {
				if (b * x + d * y + c * z == l) {
					cout << x << " " << y << " " << z << '\n';
					chk = true;
				}
			}
		}
	}

	if (!chk) cout << "impossible";

	return 0;
}
