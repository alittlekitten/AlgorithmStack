#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6750 Rotating letters
	// 문자열
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (!(s[i] == 'I' || s[i] == 'O' || s[i] == 'S' || s[i] == 'H' || s[i] == 'Z' || s[i] == 'X' || s[i] == 'N')) {
			cout << "NO";
			break;
		}
		if (i == s.size() - 1) cout << "YES";
	}
	
	return 0;
}
