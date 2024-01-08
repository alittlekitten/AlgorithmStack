#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2495 연속구간
	// 문자열
	string s;

	for (int i = 0; i < 3; i++) {
		cin >> s;
		int cnt = 1;
		int ans = 1;
		for (int i = 0; i < s.size() - 1; ++i) {
			if (s[i] == s[i + 1]) {
				++cnt;
				if (cnt > ans) ans = cnt;
			}
			else cnt = 1;
		}
		cout << ans << '\n';
	}

	return 0;
}
