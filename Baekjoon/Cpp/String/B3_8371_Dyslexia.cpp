#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8371 Dyslexia
	// 문자열
	int n;
	int ans = 0;
	string s1, s2;
	cin >> n >> s1 >> s2;
	for (int i = 0; i < n; ++i) {
		if (s1[i] != s2[i]) ++ans;
	}
	cout << ans;

	return 0;
}
