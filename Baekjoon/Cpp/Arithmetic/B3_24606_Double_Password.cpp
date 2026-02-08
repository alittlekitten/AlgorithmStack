#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24606 Double Password
	// 수학
	string s1, s2;
	cin >> s1 >> s2;

	int ans = 1;
	for (int i = 0; i < 4; ++i) {
		if (s1[i] != s2[i]) ans *= 2;
	}

	cout << ans;

	return 0;
}
