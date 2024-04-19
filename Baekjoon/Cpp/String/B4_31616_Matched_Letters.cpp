#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31616 揃った文字 (Matched Letters)
	// 문자열
	int n;
	string s;
	bool chk = true;
	cin >> n >> s;
	for (int i = 1; i < n; ++i) {
		if (s[i] != s[0]) chk = false;
	}

	if (chk) cout << "Yes";
	else cout << "No";

	return 0;
}
