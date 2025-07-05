#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34032 /gg
	// 구현
	int n;
	string s;
	cin >> n >> s;

	int o = 0;
	int x = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'O') ++o;
		else ++x;
	}
	if (n <= o * 2) cout << "Yes";
	else cout << "No";

	return 0;
}
