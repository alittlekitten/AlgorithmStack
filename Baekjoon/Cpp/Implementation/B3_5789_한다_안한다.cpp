#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5789 한다 안한다
	// 구현
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s[s.size() / 2 - 1] == s[s.size() / 2]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}

	return 0;
}
