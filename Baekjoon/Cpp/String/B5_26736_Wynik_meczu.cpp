#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26736 Wynik meczu
	// 문자열
	string s;
	int a = 0;
	int b = 0;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'A') ++a;
		else ++b;
	}
	cout << a << " : " << b;

	return 0;
}    
