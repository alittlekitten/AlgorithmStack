#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21955 Split
	// 문자열
	string s;
	cin >> s;
	cout << s.substr(0, s.size() / 2) << " " << s.substr(s.size() / 2, s.size() / 2);

	return 0;
}
