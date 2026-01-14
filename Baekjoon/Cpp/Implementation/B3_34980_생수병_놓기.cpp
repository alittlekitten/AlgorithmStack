#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34980 생수병 놓기
	// 구현
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < n; ++i) {
		if (s1[i] == 'w') ++cnt1;
	}

	for (int i = 0; i < n; ++i) {
		if (s2[i] == 'w') ++cnt2;
	}

	if (cnt1 > cnt2) cout << "Oryang";
	else if (cnt1 < cnt2) cout << "Manners maketh man";
	else {
		if (s1 == s2) cout << "Good";
		else cout << "Its fine";
	}

	return 0;
}
