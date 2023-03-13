#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10214 Baseball
	// 구현
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int y = 0;
		int k = 0;
		for (int j = 0; j < 9; ++j) {
			int a, b;
			cin >> a >> b;
			y += a;
			k += b;
		}
		if (y > k) cout << "Yonsei\n";
		else if (y < k) cout << "Korea\n";
		else cout << "Draw\n";
	}

	return 0;
}
