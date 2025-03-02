#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 19941 햄버거 분배
	// 그리디
	string s;
	int n, k;
	cin >> n >> k >> s;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] != 'P') continue;

		for (int j = i - k; j <= i + k; ++j) {
			if (j >= 0 && j < n && s[j] == 'H') {
				s[j] = '-';
				++ans;
				break;
			}
		}
	}

	cout << ans;

	return 0;
}
