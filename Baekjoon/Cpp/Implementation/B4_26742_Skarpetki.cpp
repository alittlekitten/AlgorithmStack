#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26742 Skarpetki
	// 구현
	string s;
	cin >> s;
	int b = 0;
	int c = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'B') ++b;
		else ++c;
	}
	cout << b / 2 + c / 2;

	return 0;
}    
