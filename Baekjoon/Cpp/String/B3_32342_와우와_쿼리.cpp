#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32342 와우와 쿼리
	// 문자열
	int q;
	string s;
	cin >> q;

	for (int i = 0; i < q; ++i) {
		cin >> s;

		if (s.size() < 3) cout << "0" << '\n';
		else {
			int ans = 0;
			for (int j = 0; j < s.size() - 2; ++j) {
				if (s.substr(j, 3) == "WOW") ++ans;
			}

			cout << ans << '\n';
		}
	}

	return 0;
}
