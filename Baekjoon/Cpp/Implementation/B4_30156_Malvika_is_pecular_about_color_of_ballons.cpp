#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30156 Malvika is peculiar about color of balloons
	// 구현
	int t;
	string s;
	cin >> t;

	while (t--) {
		cin >> s;

		int a = 0;
		int b = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'a') ++a;
			else if (s[i] == 'b') ++b;
		}

		cout << min(a, b) << '\n';
	}

	return 0;
}
