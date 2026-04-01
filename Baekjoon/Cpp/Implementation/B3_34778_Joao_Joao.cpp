#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34778 João João
	// 구현
	int d;
	bool exists[5] = { 0 };

	for (int i = 0; i < 10; ++i) {
		cin >> d;
		exists[d] = true;
	}

	int ans = 0;
	for (int i = 1; i <= 4; ++i) {
		if (!exists[i]) ++ans;
	}

	cout << ans;

	return 0;
}
