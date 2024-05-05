#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 26731 Zagubiona litera
	// 문자열
	string s;
	cin >> s;
	bool alpha[26] = { 0 };
	for (int i = 0; i < 25; ++i) {
		alpha[s[i] - 'A'] = 1;
	}
	
	for (int i = 0; i < 26; ++i) {
		if (!alpha[i]) {
			cout << (char)(i + 'A');
			break;
		}
	}

	return 0;
}
