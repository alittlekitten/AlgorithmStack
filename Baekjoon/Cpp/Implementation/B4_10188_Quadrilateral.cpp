#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10188 Quadrilateral
	// 구현
	int t, r, c;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> c >> r;
		for (int j = 0; j < r; ++j) {
			for (int k = 0; k < c; ++k) {
				cout << "X";
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}
