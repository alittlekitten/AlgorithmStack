#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2810 컵홀더
	// 그리디
	int n;
	string s;
	cin >> n >> s;
	int ans = n + 1;
	int cnt = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'L') ++cnt;
	}
	if (!cnt) ans = n;
	else ans -= (cnt / 2);
	cout << ans;

	return 0;
}
