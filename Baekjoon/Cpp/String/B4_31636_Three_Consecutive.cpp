#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31636 三連続 (Three Consecutive) 
	// 문자열
	int n;
	string s;
	cin >> n >> s;
	
	int cnt = 1;
	char c = '.';
	for (int i = 0; i < n; ++i) {
		if (c != s[i]) cnt = 1;
		else ++cnt;
		
		if (cnt == 3 && c == 'o') break;
		c = s[i];
	}

	if (cnt == 3 && c == 'o') cout << "Yes";
	else cout << "No";

	return 0;
}
