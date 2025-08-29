#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33845 PNUPC에 한 번도 빠지지 않고 출연한 산지니가 새삼 대단하다고 느껴지네
	// 구현
	string s, t;
	bool check[26] = { 0 };
	cin >> s >> t;

	for (int i = 0; i < s.size(); ++i) check[s[i] - 'a'] = true;

	for (int i = 0; i < t.size(); ++i) {
		if (!check[t[i] - 'a']) cout << t[i];
	}

	return 0;
}
