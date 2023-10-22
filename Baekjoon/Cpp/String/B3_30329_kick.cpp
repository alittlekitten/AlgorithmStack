#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30329 kick
	// 문자열
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size() - 3; ++i) {
		if (s[i] == 'k' && s[i + 1] == 'i' && s[i + 2] == 'c' && s[i + 3] == 'k') ++ans;
	}
	cout << ans;

	return 0;
}
