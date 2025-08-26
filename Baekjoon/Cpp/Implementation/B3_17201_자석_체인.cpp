#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17201 자석 체인
	// 구현
	int n;
	string s;
	cin >> n >> s;

	bool chk = true;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == s[i + 1]) chk = false;
	}
	
	if (chk) cout << "Yes";
	else cout << "No";

	return 0;
}
