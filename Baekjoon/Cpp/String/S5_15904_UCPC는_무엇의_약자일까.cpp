#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15904 UCPC는 무엇의 약자일까?
	// 문자열
	string s;
	string res = "";
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'U' && res == "") res += "U";
		else if (s[i] == 'C' && res == "U") res += "C";
		else if (s[i] == 'P' && res == "UC") res += "P";
		else if (s[i] == 'C' && res == "UCP") res += "C";
	}
	if (res == "UCPC") cout << "I love UCPC";
	else cout << "I hate UCPC";

	return 0;
}
