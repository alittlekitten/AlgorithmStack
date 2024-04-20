#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31612 画数数え (Stroke Count)
	// 문자열
	int n;
	string s;
	cin >> n >> s;
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		if (s[i] == 'o') ++ans;
		else ans += 2;
	}

	cout << ans;

	return 0;
}
