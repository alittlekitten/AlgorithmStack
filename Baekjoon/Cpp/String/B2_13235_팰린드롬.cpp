#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13235 팰린드롬
	// 문자열
	string s;
	cin >> s;
	string rs = s;
	reverse(rs.begin(), rs.end());

	if (s == rs) cout << "true";
	else cout << "false";

	return 0;
}
