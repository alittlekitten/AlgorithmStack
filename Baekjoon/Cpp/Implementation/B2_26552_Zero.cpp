#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26552 Zero
	// 구현
	int n, k;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> k;
		while (1) {
			++k;
			bool chk = false;
			string s = to_string(k);
			for (int j = 0; j < s.size(); ++j) {
				if (s[j] == '0') {
					chk = true;
					break;
				}
			}
			if (chk == false) break;
		}
		cout << k << '\n';
	}

	return 0;
}
