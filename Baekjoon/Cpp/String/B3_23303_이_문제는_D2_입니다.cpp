#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23303 이 문제는 D2 입니다.
	// 문자열
	string s;
	bool chk = false;
	getline(cin, s);
	for (int i = 0; i < s.size() - 1; ++i) {
		if ((s[i] == 'D' || s[i] == 'd') && s[i + 1] == '2') {
			chk = true;
			break;
		}
	}
	if (chk) cout << "D2";
	else cout << "unrated";

	return 0;
}
