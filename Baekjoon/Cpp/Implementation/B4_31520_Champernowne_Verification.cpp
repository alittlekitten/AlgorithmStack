#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31520 Champernowne Verification
	// 구현
	string s; 
	cin >> s;

	bool chk = true;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] - '0' != i + 1) {
			chk = false;
			break;
		}
	}
	if (chk) cout << s.size();
	else cout << -1;

	return 0;
}
