#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32516 팰린드롬 판별하기 2
	// 문자열
	int n;
	string t;
	cin >> n >> t;

	int ans = 0;
	for (int i = 0; i < n / 2; ++i) {
		if (t[i] == t[n - i - 1]) {
			if (t[i] == '?') ans += 26;
		}
		else {
			if (t[i] == '?' || t[n - i - 1] == '?') ++ans;
			else {
				ans = 0;
				break;
			}
		}
	}
	cout << ans;

	return 0;
}
