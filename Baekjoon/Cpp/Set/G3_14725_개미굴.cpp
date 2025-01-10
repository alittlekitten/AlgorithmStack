#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14725 개미굴
	// 문자열, 셋, 트라이
	int n, k, t;
	string s;
	set<string> ss;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> k;
		string tmp = "";
		for (int j = 0; j < k; ++j) {
			cin >> s;
			tmp += "*" + s;
			ss.insert(tmp);
		}
	}

	for (auto elem : ss) {
		int cnt = count(elem.begin(), elem.end(), '*'); // *의 수를 elem이라는 string을 돌면서 센다
		int idx = elem.find_last_of("*");
		string ans = elem.substr(idx + 1);

		for (int i = 0; i < cnt - 1; ++i) cout << "--";
		cout << ans << '\n';
	}

	return 0;
}
