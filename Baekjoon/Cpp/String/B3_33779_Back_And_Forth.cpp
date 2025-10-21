#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33779 Back and Forth
	// 문자열
	string s;
	string ans = "beep";
	cin >> s;

	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1]) {
			ans = "boop";
			break;
		}
	}

	cout << ans;

	return 0;
}
