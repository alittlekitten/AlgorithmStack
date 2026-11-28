#include <iostream>
#include <vector>
using namespace std;

int getValue(char c) {
	switch (c) {
		case '-': return 0;
		case '\\': return 1;
		case '(': return 2;
		case '@': return 3;
		case '?': return 4;
		case '>': return 5;
		case '&': return 6;
		case '%': return 7;
		case '/': return -1;
		default: return 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1864 문어 숫자
	// 수학
	string s;
	while (cin >> s) {
		if (s == "#") break;

		long long ans = 0;
		for (char c : s) {
			ans = ans * 8 + getValue(c);
		}
		cout << ans << '\n';
	}

	return 0;
}
