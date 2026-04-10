#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26547 Square
	// 구현
	int k;
	string s;
	cin >> k;

	while (k--) {
		cin >> s;
		if (s.length() == 1) {
			cout << s << '\n';
			continue;
		}

		cout << s << '\n';
		for (int i = 1; i < s.length() - 1; ++i) {
			cout << s[i];
			for (int j = 1; j < s.length() - 1; ++j) cout << ' ';
			cout << s[s.length() - 1 - i] << '\n';
		}
		for (int i = s.length() - 1; i >= 0; --i) cout << s[i];
		cout << '\n';
	}

	return 0;
}
