#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5358 Football Team
	// 문자열
	string s;
	while (1) {
		if (!getline(cin, s)) break;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'e') cout << 'i';
			else if (s[i] == 'i') cout << 'e';
			else if (s[i] == 'E') cout << 'I';
			else if (s[i] == 'I') cout << 'E';
			else cout << s[i];
		}
		cout << '\n';
	}

	return 0;
}
