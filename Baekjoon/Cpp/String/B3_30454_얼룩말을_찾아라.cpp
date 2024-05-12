#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30454 얼룩말을 찾아라!
	// 문자열
	int n, l;
	string s;
	int black = 0;
	int cnt = 0;
	cin >> n >> l;
	for (int i = 0; i < n; ++i) {
		cin >> s;

		int tmp = 0;
		if (s[0] == '1') tmp++;
		for (int j = 1; j < l; ++j) {
			if (s[j - 1] == '0' && s[j] == '1') ++tmp;
		}

		if (black < tmp) {
			black = tmp;
			cnt = 0;
		}
		if (black == tmp) ++cnt;
	}
	cout << black << ' ' << cnt;

	return 0;
}
