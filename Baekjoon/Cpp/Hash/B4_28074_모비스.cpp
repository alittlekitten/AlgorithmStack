#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28074 모비스
	// 해시, 문자열
	string s;
	map<char, int> m;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (m[s[i]]) ++m[s[i]];
		else m[s[i]] = 1;
	}
	if (m['M'] && m['O'] && m['B'] && m['I'] && m['S']) cout << "YES";
	else cout << "NO";

	return 0;
}
