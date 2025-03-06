#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20528 끝말잇기
	// 문자열
	int n;
	string s;
	cin >> n >> s;
	char tmp = s[0];

	int ans = 1;
	for (int i = 1; i < n; ++i) {
		cin >> s;
		if (tmp != s[0]) ans = 0;
	}

	cout << ans;

	return 0;
}
