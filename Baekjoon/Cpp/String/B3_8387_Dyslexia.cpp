#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8387 Dyslexia
	// 문자열
	int n; 
	cin >> n;

	string s1, s2;
	cin >> s1 >> s2;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (s1[i] == s2[i]) ++ans;
	}

	cout << ans;

	return 0;
}
