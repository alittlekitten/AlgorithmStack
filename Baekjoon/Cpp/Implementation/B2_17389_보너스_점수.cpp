#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17389 보너스 점수
	// 구현
	int n;
	string s;
	cin >> n >> s;

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'O') {
			ans += i + 1 + cnt;
			++cnt;
		}
		else cnt = 0;
	}

	cout << ans;

	return 0;
}
