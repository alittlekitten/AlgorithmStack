#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33950 어게인 포닉스
	// 구현
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); ++i) {
			if (i < s.size() - 1 && s[i] == 'P' && s[i + 1] == 'O') {
				cout << "PHO";
				++i;
			}
			else cout << s[i];
		}
		cout << '\n';
	}

	return 0;
}
