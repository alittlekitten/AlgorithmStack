#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34553 알파벳 점수 계산기
	// 문자열
	string s;
	cin >> s;

	char c = s[0];
	int score = 1;
	int ans = 1;
	for (int i = 1; i < s.size(); ++i) {
		if (c < s[i]) ++score;
		else score = 1;

		c = s[i];
		ans += score;
	}

	cout << ans;

	return 0;
}
