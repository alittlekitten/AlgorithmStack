#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24196 Gomda ord
	// 문자열
	string s;
	cin >> s;
	int idx = 0;
	while (idx < s.size()) {
		cout << s[idx];
		idx += s[idx] - 64;
	}

	return 0;
}
