#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6550 부분 문자열
	// 문자열
	string a, b;
	while (cin >> a >> b) {
		int idx = 0;
		bool chk = false;
		for (int i = 0; i < b.size(); ++i) {
			if (a[idx] == b[i]) ++idx;
			if (idx == a.size()) {
				chk = true;
				break;
			}
		}

		if (chk) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}

	return 0;
}
