#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33163 OIJ
	// 문자열
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'J') cout << 'O';
		else if (s[i] == 'O') cout << 'I';
		else if (s[i] == 'I') cout << 'J';
		else cout << s[i];
	}

	return 0;
}
