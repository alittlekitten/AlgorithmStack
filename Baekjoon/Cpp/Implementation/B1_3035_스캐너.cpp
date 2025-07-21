#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3035 스캐너
	// 구현
	int r, c, zr, zc;
	char ch;
	cin >> r >> c >> zr >> zc;

	for (int k = 0; k < r; ++k) {
		string s = "";
		for (int i = 0; i < c; ++i) {
			cin >> ch;
			for (int j = 0; j < zc; ++j) s += ch;
		}

		for (int i = 0; i < zr; ++i) cout << s << '\n';
	}

	return 0;
}
