#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2892 심심한 준규
	// 애드 혹, 문자열
	int n;
	string s;
	string ans = "";
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		int tmp = stoi(s, nullptr, 16); // 16진수 변환
		if (tmp >= 64 && tmp <= 95) ans += "-";
		else ans += ".";
	}
	cout << ans;

	return 0;
}
