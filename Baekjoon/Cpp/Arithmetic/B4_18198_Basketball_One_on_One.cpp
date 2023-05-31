#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18198 Basketball One-on-One
	// 수학
	int a = 0;
	int b = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i += 2) {
		if (s[i] == 'A') a += s[i + 1] - '0';
		else b += s[i + 1] - '0';
	}
	if (a > b) cout << "A";
	else cout << "B";

	return 0;
}
