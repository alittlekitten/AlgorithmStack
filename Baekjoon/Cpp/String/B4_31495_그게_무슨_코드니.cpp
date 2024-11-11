#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31495 그게 무슨 코드니..
	// 문자열
	string s;
	getline(cin, s);

	if (s.length() <= 2 || !(s.front() == '\"' && s.back() == '\"')) cout << "CE";
	else for (int i = 1; i < s.length() - 1; ++i) cout << s[i];

	return 0;
}
