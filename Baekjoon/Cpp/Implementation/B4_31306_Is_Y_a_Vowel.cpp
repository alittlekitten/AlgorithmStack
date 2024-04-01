#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31306 Is Y a Vowel?
	// 구현
	string s;
	cin >> s;

	int vCnt = 0;
	int yCnt = 0;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ++vCnt;
		if (s[i] == 'y') ++yCnt;
	}

	cout << vCnt << " " << vCnt + yCnt;

	return 0;
}
