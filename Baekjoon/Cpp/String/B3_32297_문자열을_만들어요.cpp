#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32297 문자열을 만들어요
	// 문자열
	int n;
	string s;
	cin >> n >> s;

	bool chk = false;
	for (int i = 0; i < s.size() - 3; ++i) {
		if (s[i] == 'g' && s[i + 1] == 'o' && s[i + 2] == 'r' && s[i + 3] == 'i') chk = true;
	}

	if (chk) cout << "YES";
	else cout << "NO";

	return 0;
}
