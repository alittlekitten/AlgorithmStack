#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30224 Lucky 7
	// 수학
	string s;
	cin >> s;
	
	bool chk = false;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '7') {
			chk = true;
			break;
		}
	}

	int n = stoi(s);
	bool chk2 = false;
	if (n % 7) chk2 = true;

	if (!chk && chk2) cout << 0;
	else if (!chk && !chk2) cout << 1;
	else if (chk && chk2) cout << 2;
	else cout << 3;

	return 0;
}
