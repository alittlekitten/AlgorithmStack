#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30684 모르고리즘 회장 정하기
	// 문자열
	int n;
	string s;
	string ans = "ZZZ";
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s.size() == 3 && s < ans) ans = s;
	}
	cout << ans;

	return 0;
}
