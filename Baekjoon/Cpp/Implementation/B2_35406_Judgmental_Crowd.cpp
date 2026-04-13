#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35406 Judgmental Crowd
	// 구현
	string s;
	cin >> s;

	int ans = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (i + 1 < s.size() && s.substr(i, 2) == "ha") ++ans;
		if (i + 4 < s.size() && s.substr(i, 5) == "boooo") --ans;
		if (i + 4 < s.size() && s.substr(i, 5) == "bravo") ans += 3;
	}

	cout << ans;

	return 0;
}
