#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25893 Majestic 10
	// 수학
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int score[3] = { 0 };
		int chk = 0;
		for (int j = 0; j < 3; ++j) {
			cin >> score[j];
			if (score[j] >= 10) ++chk;
		}

		for (int j = 0; j < 3; ++j) cout << score[j] << " ";
		cout << '\n';

		if (chk == 1) cout << "double\n\n";
		else if (chk == 2) cout << "double-double\n\n";
		else if (chk == 3) cout << "triple-double\n\n";
		else cout << "zilch\n\n";
	}

	return 0;
}
