#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2490 윷놀이
  // 구현
	for (int i = 0; i < 3; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = a + b + c + d;
		if (sum == 0) cout << 'D' << endl;
		else if (sum == 1) cout << 'C' << endl;
		else if (sum == 2) cout << 'B' << endl;
		else if (sum == 3) cout << 'A' << endl;
		else if (sum == 4) cout << 'E' << endl;
	}

	return 0;
}
