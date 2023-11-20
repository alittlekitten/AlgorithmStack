#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30501 관공... 어찌하여 목만 오셨소...
	// 문자열
	int n;
	string s;
	string ans;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < s.size(); ++j) {
			if (s[j] == 'S') {
				ans = s;
				break;
			}
		}
	}
	cout << ans;

	return 0;
}
