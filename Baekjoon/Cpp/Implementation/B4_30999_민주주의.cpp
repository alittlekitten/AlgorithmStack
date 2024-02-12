#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30999 민주주의
	// 구현
	int n, m;
	int ans = 0;
	string s;
	cin >> n >> m;
	while (n--) {
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'O') ++cnt;
		}
		if (cnt * 2 > m) ++ans;
	}
	cout << ans;

	return 0;
}
