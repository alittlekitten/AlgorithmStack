#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3059 등장하지 않는 문자의 합
	// 문자열
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		bool arr[26] = { 0 };
		int ans = 0;
		cin >> s;
		for (int j = 0; j < s.size(); ++j) {
			arr[s[j] - 65] = true;
		}
		for (int j = 0; j < 26; ++j) {
			if (!arr[j]) ans += j + 65;
		}
		cout << ans << '\n';
	}

	return 0;
}    
