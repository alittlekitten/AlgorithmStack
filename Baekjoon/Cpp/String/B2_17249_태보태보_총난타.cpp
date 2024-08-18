#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17249 태보태보 총난타
	// 문자열
	string s;
	int idx = 0;
	int l = 0;
	int r = 0;
	cin >> s;

	while (1) {
		if (s[idx] == '@') ++l;
		else if (s[idx] == ')') break;
		idx++;
	}

	while (s.size() != idx) if (s[idx++] == '@') ++r;

	cout << l << " " << r;

	return 0;
}
