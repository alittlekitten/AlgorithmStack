#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9933 민균이의 비밀번호
	// 구현
	int n;
	string s, ans;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];

	for (int i = 0; i < n; ++i) {
		s = v[i];
		reverse(s.begin(), s.end());
		if (s == *find(v.begin(), v.end(), s)) {
			ans = s;
			break;
		}
	}

	cout << ans.size() << " " << ans[ans.size() / 2];

	return 0;
}
