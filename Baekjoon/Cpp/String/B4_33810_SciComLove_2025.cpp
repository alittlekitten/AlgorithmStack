#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33810 SciComLove (2025)
	// 문자열
	string s;
	string target = "SciComLove";
	cin >> s;

	int ans = 0;
	for (int i = 0; i < 10; ++i) {
		if (s[i] != target[i]) ++ans;
	}
	
	cout << ans;

	return 0;
}
