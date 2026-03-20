#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25870 Parity of Strings
	// 문자열
	string s;
	cin >> s;

	int cnt[123] = { 0 };
	bool even = true;
	bool odd = true;
	for (int i = 0; i < s.size(); ++i) ++cnt[s[i]];

	for (int i = 97; i <= 122; ++i) {
		if (cnt[i]) {
			if (cnt[i] & 1) even = false;
			else odd = false;
		}
	}

	if (even) cout << 0;
	else if (odd) cout << 1;
	else cout << 2;

	return 0;
}
