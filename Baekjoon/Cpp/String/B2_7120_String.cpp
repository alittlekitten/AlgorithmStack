#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7120 String
	// 문자열
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (i != 0 && s[i - 1] == s[i]) continue;
		cout << s[i];
	}

	return 0;
}
