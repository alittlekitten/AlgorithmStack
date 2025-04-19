#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33571 구멍
	// 문자열
	int n;
	string s;
	string target = "ABBDOPQRabdegopq@";
	getline(cin, s);

	int ans = 0;
	for (int i = 0; i < s.size(); ++i) {
		ans += count(target.begin(), target.end(), s[i]);
	}
	cout << ans;

	return 0;
}
