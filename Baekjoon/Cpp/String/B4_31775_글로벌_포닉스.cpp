#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31775 글로벌 포닉스
	// 문자열
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	bool l = false;
	bool k = false;
	bool p = false;

	if (s1[0] == 'l' || s2[0] == 'l' || s3[0] == 'l') l = true;
	if (s1[0] == 'k' || s2[0] == 'k' || s3[0] == 'k') k = true;
	if (s1[0] == 'p' || s2[0] == 'p' || s3[0] == 'p') p = true;

	if (l && k && p) cout << "GLOBAL";
	else cout << "PONIX";

	return 0;
}
