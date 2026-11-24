#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3062 수 뒤집기
	// 수학
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int origin = stoi(s);
		string rs = s;
		reverse(rs.begin(), rs.end());
		int rn = stoi(rs);

		string ss = to_string(origin + rn);
		bool ans = true;

		int l = 0;
		int r = ss.size() - 1;
		while (l < r) {
			if (ss[l] != ss[r]) {
				ans = false;
				break;
			}
			++l;
			--r;
		}

		if (ans) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
