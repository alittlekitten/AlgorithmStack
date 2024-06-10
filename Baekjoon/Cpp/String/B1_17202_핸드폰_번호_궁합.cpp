#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17202 핸드폰 번호 궁합
	// 문자열
	string s1, s2, res;
	string ans = "";

	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); ++i) ans = ans + s1[i] + s2[i];

	while (ans.size() != 2) {
		for (int i = 0; i < ans.size() - 1; ++i) {
			res = res + char('0' + ((ans[i] - '0') + (ans[i + 1] - '0')) % 10);
		}
		ans = res;
		res.clear();
	}

	cout << ans;

	return 0;
}
