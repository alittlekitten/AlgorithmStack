#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30045 ZOAC 6
	// 문자열
	int n;
	string s;
	int ans = 0;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < s.size() - 1; ++j) {
			if (s[j] == '0' && s[j + 1] == '1' || s[j] == 'O' && s[j + 1] == 'I') {
				++ans;
				break;
			}
		}
	}

	cout << ans;

	return 0;
}
