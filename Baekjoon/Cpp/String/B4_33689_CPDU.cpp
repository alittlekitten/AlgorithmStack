#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33689 CPDU
	// 문자열
	int n;
	string s;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s[0] == 'C') ++ans;
	}
	cout << ans;

	return 0;
}
