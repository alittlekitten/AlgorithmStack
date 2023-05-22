#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17009 Winning Score
	// 수학
	int tmp;
	int a = 0;
	int b = 0;
	for (int i = 0; i < 6; ++i) {
		cin >> tmp;
		if (i < 3) {
			if (i == 0) a += tmp * 3;
			else if (i == 1) a += tmp * 2;
			else a += tmp;
		}
		else {
			if (i == 3) b += tmp * 3;
			else if (i == 4) b += tmp * 2;
			else b += tmp;
		}
	}
	if (a > b) cout << "A";
	else if (a < b) cout << "B";
	else cout << "T";

	return 0;
}
