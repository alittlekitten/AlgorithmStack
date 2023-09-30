#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30008 준영이의 등급
	// 수학
	int n, k, g;
	cin >> n >> k;
	for (int i = 0; i < k; ++i) {
		cin >> g;
		if (g * 100 / n <= 4) cout << "1 ";
		else if (g * 100 / n <= 11) cout << "2 ";
		else if (g * 100 / n <= 23) cout << "3 ";
		else if (g * 100 / n <= 40) cout << "4 ";
		else if (g * 100 / n <= 60) cout << "5 ";
		else if (g * 100 / n <= 77) cout << "6 ";
		else if (g * 100 / n <= 89) cout << "7 ";
		else if (g * 100 / n <= 96) cout << "8 ";
		else cout << "9 ";
	}

	return 0;
}
