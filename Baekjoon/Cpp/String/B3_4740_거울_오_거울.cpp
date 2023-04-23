#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 4740 거울, 오! 거울
	// 문자열
	string s;
	while (1) {
		getline(cin, s);
		if (s == "***") break;
		for (int i = 0; i < s.size(); ++i) cout << s[s.size() - 1 - i];
		cout << '\n';
	}

	return 0;
}
