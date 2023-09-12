#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29766 DKSH 찾기
	// 문자열
	string s;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < s.size() - 3; ++i) {
		if (s[i] == 'D' && s[i + 1] == 'K' && s[i + 2] == 'S' && s[i + 3] == 'H') ++ans;
	}
	cout << ans;

	return 0;
}
