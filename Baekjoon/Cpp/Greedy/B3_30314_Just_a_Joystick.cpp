#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30314 Just a Joystick
	// 그리디
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += min(abs(s1[i] - s2[i]), 26 - abs(s1[i] - s2[i]));
	}

	cout << ans;

	return 0;
}
