#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17618 신기한 수
	// 브루트포스
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		string s = to_string(i);
		int sum = 0;
		for (int j = 0; j < s.size(); ++j) sum += s[j] - '0';
		if (i % sum == 0) ++ans;
	}
	cout << ans;

	return 0;
}
