#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4597 패리티
	// 문자열
	while (1){
		int cnt = 0;
		string s;
		cin >> s;
		if (s == "#") break;
		for (int i = 0; i < s.size() - 1; ++i) {
			if (s[i] == '1') ++cnt;
		}
			
		if (s[s.size() - 1] == 'e') {
			if (cnt % 2 == 0) s[s.size() - 1] = '0';
			else s[s.size() - 1] = '1';
		}
		else {
			if (cnt % 2 == 0) s[s.size() - 1] = '1';
			else s[s.size() - 1] = '0';
		}
		cout << s << '\n';
	}

	return 0;
}
