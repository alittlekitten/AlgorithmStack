#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23080 스키테일 암호
	// 문자열
	int k;
	string s;
	cin >> k >> s;
	
	for (int i = 0; i < s.size(); i += k) cout << s[i];

	return 0;
}
