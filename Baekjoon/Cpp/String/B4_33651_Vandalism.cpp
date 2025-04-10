#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33651 Vandalism
	// 문자열
	string s;
	cin >> s;
	string ans = "";
	string target = "UAPC";
	for (int i = 0; i < 4; ++i) {
		if (s.find(target[i]) == string::npos) ans += target[i];
	}
	cout << ans;

	return 0;
}
