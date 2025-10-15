#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13297 Quick Estimates
	// 문자열
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		cout << s.size() << '\n';
	}

	return 0;
}
