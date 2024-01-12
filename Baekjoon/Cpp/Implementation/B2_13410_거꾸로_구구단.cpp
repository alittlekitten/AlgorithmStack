#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13410 거꾸로 구구단
	// 구현
	int n, k;
	int ans = 0;
	cin >> n >> k;
	for (int i = 1; i <= k; ++i) {
		string s = to_string((i * n));
		reverse(s.begin(), s.end());
		ans = max(ans, stoi(s));
	}
	cout << ans;

	return 0;
}
