#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15272 Hissing Microphone
	// 문자열
	string s;
	cin >> s;

	bool chk = false;
	for (int i = 0; i < s.size() - 1; ++i) {
		if (s[i] == 's' && s[i + 1] == 's') chk = true;
	}

	if (chk) cout << "hiss";
	else cout << "no hiss";

	return 0;
}
