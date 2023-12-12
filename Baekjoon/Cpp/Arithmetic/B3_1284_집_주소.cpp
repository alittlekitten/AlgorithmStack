#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1284 집 주소
	// 수학
	string s;

	while (1) {
		cin >> s;
		if (s == "0") return 0;

		int ans = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '1') ans += 2;
			else if (s[i] == '0') ans += 4;
			else ans += 3;
			++ans;
		}
		cout << ans + 1 << '\n';
	}

	return 0;
}
