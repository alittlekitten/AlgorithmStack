#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18698 The Walking Adam
	// 문자열
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		int ans = 0;
		for (int j = 0; j < s.size(); ++j) {
			if (s[j] == 'U') ++ans;
			else break;
		}
		cout << ans << '\n';
	}

	return 0;
}
