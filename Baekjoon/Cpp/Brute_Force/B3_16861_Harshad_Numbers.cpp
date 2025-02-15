#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16861 Harshad Numbers
	// 브루트포스
	int n;
	string s;
	cin >> n;

	while (1) {
		s = to_string(n);

		int tmp = 0;
		for (int i = 0; i < s.size(); ++i) {
			tmp += s[i] - '0';
		}

		if (n % tmp == 0) {
			cout << n << '\n';
			break;
		}

		++n;
	}

	return 0;
}
