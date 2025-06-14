#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31656 Sticky Keys
	// 문자열
	string s;
	getline(cin, s);
	cout << s[0];

	for (int i = 1; i < s.size(); ++i) {
		if (s[i] != s[i - 1]) cout << s[i];
	}

	return 0;
}
