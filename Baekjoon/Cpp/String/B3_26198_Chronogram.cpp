#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26198 Chronogram
	// 문자열
	int t;
	string s;
	cin >> t;
	cin.ignore();

	for (int i = 0; i < t; ++i) {
		getline(cin, s);
		int ans = 0;

		for (char ch : s) {
			switch (ch) {
			case 'I': ans += 1; break;
			case 'V': ans += 5; break;
			case 'X': ans += 10; break;
			case 'L': ans += 50; break;
			case 'C': ans += 100; break;
			case 'D': ans += 500; break;
			case 'M': ans += 1000; break;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
