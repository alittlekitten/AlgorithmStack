#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11098 첼시를 도와줘!
	// 구현
	int n, p, c;
	string s;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> p;
		int maxValue = 0;
		string ans;
		for (int j = 0; j < p; ++j) {
			cin >> c >> s;
			if (c > maxValue) {
				maxValue = c;
				ans = s;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}
