#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30700 KOREA 문자열 만들기
	// 문자열
	string s;
	string target = "KOREA";

	cin >> s;
	int ans = 0;

	for (int i = 0; i < s.size(); ++i) {
		if (target[ans % 5] == s[i]) ++ans;
	}

	cout << ans;

	return 0;
}
