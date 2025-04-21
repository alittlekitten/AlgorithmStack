#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6378 디지털 루트
	// 수학
	string s;
	int ans;
	while (1) {
		cin >> s;
		ans = 0;

		if (s == "0") break;

		while (1) {
			for (int i = 0; i < s.size(); ++i) ans += s[i] - '0';
			if (ans < 10) break;
			else {
				s = to_string(ans);
				ans = 0;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
