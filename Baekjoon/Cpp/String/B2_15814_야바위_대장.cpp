#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15814 야바위 대장
	// 문자열
	string s;
	int t, a, b;
	cin >> s >> t;
	while (t--) {
		cin >> a >> b;
		swap(s[a], s[b]);
	}

	cout << s;

	return 0;
}
