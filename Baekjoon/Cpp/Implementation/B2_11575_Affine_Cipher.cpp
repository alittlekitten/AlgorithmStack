#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11575 Affine Cipher
	// 구현
	int n, a, b;
	string s;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a >> b >> s;
		for (int j = 0; j < s.size(); ++j) {
			s[j] = char(((a * s[j] - 'A' + b) % 26) + 'A');
		}
		cout << s << '\n';
	}

	return 0;
}
