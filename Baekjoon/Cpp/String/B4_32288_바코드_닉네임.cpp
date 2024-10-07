#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32288 바코드 닉네임
	// 문자열
	int n;
	string s;
	string ans = "";
	cin >> n >> s;
	for (int i = 0; i < n; ++i) {
		char c = s[i];
		if (c >= 97) ans += c - 32;
		else ans += c + 32;
	}
	cout << ans;

	return 0;
}
