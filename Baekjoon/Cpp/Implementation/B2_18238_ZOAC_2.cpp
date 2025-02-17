#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18238 ZOAC 2
	// 구현
	string s;
	cin >> s;

	int now = 0; // 현재
	int ans = 0;
	for (int i = 0; i < s.size(); ++i) {
		int target = s[i] - 'A'; // 타겟
		if (abs(now - target) < 26 - abs(now - target)) ans += abs(now - target);
		else ans += 26 - abs(now - target);
		now = target;
	}
	cout << ans;

	return 0;
}
