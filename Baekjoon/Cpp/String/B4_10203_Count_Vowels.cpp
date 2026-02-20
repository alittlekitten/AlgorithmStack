#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10203 Count Vowels
	// 문자열
	int n;
	string s;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> s;

		int cnt = 0;
		for (char c : s) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ++cnt;
		}

		cout << "The number of vowels in " << s << " is " << cnt << ".\n";
	}

	return 0;
}
