#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17094 Serious Problem
	// 문자열
	int n;
	string s;
	cin >> n >> s;

	int cnt2 = 0;
	int cntE = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '2') ++cnt2;
		else if (s[i] == 'e') ++cntE;
	}
	if (cnt2 == cntE) cout << "yee";
	else if (cnt2 > cntE) cout << "2";
	else cout << "e";

	return 0;
}
