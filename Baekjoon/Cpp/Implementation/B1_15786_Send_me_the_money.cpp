#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15786 Send me the money
	// 구현
	int n, m;
	string s, input;
	cin >> n >> m >> s;

	for (int i = 0; i < m; ++i) {
		cin >> input;
		bool chk = false;
		int idx = 0;
		for (int j = 0; input[j]; ++j) {
			if (input[j] == s[idx]) ++idx;
			if (idx == n) {
				chk = true;
				break;
			}
		}
		if (chk) cout << "true" << '\n';
		else cout << "false" << '\n';
	}

	return 0;
}
