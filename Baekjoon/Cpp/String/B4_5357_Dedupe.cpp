#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5357 Dedupe
	// 문자열
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		char c = ' ';
		string ans = "";
		cin >> s;
		for (int j = 0; j < s.size(); ++j) {
			if (c != s[j]) {
				c = s[j];
				ans += s[j];
			}
		}
		cout << ans << '\n';
	}

	return 0;
}    
