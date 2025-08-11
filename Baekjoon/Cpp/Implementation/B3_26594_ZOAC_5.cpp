#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26594 ZOAC 5
	// 구현
	string s;
	cin >> s;

	int ans = 1;
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] == s[i - 1]) ++ans;
		else break;
	}

	cout << ans;

	return 0;
}
