#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26546 Reverse
	// 문자열
	string s;
	int n, start, end;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s >> start >> end;
		for (int j = 0; j < s.size(); ++j) {
			if (j < start || j >= end) cout << s[j];
		}
		cout << '\n';
	}

	return 0;
}
