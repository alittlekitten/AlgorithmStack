#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1316 그룹 단어 체커
	// 문자열
	int n;
	string s;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		bool chk = true;
		for (int j = 1; j < s.size(); ++j) {
			for (int k = 0; k < j; ++k) {
				if (s[j] != s[j - 1] && s[j] == s[k]) {
					chk = false;
					break;
				}
			}
			if (!chk) break;
		}
		if (chk) ++ans;
	}
	cout << ans;
	
	return 0;
}
