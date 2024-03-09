#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26560 Periods
	// 문자열
	int n;
	string s;
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, s);
		if (s[s.size() - 1] != '.') s += ".";
		cout << s << '\n';
	}

	return 0;
}
