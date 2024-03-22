#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 29725 체스 초보 브실이
	// 구현
	string s;
	int ans = 0;
	for (int i = 0; i < 8; ++i) {
		cin >> s;
		for (int j = 0; j < 8; ++j) {
			if (s[j] == 'P') ++ans;
			else if (s[j] == 'p') --ans;
			else if (s[j] == 'N' || s[j] == 'B') ans += 3;
			else if (s[j] == 'n' || s[j] == 'b') ans -= 3;
			else if (s[j] == 'R') ans += 5;
			else if (s[j] == 'r') ans -= 5;
			else if (s[j] == 'Q') ans += 9;
			else if (s[j] == 'q') ans -= 9;
		}
	}
	cout << ans;

	return 0;
}
