#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14209 Bridž
	// 수학
	int n;
	string s;
	cin >> n;

	int ans = 0;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (char c : s) {
			if (c == 'A') ans += 4;
			else if (c == 'K') ans += 3;
			else if (c == 'Q') ans += 2;
			else if (c == 'J') ans += 1;
		}
	}

	cout << ans;

	return 0;
}
