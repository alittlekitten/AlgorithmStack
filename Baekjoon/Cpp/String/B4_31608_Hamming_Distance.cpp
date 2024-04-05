#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31608 ハミング距離 (Hamming Distance)
	// 문자열
	int n;
	string s, t;
	cin >> n >> s >> t;
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		if (s[i] != t[i]) ++ans;
	}

	cout << ans;

	return 0;
}
