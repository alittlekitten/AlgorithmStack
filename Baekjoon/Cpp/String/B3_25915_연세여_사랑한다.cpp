#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25915 연세여 사랑한다
	// 문자열
	string s = "ILOVEYONSEI";
	char c;
	int ans = 0;
	cin >> c;

	for (int i = 0; i < s.size(); ++i) {
		ans += abs(c - s[i]);
		c = s[i];
	}

	cout << ans;

	return 0;
}
