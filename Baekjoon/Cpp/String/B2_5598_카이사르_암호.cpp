#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5598 카이사르 암호
	// 문자열
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		s[i] -= 3;
		if (s[i] < 'A') s[i] += 26;
	}

	cout << s;

	return 0;
}
