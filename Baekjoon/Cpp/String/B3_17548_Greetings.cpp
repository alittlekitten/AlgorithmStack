#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17548 Greetings
	// 문자열
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); ++i) if (s[i] == 'e') ++cnt;
	cout << "h";
	for (int i = 0; i < cnt; ++i) cout << "ee";
	cout << "y";
	
	return 0;
}
