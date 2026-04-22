#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24405 Eye of Sauron
	// 문자열
	string s;
	cin >> s;

	if (s.find('(') == s.size() - s.find(')') - 1) cout << "correct";
	else cout << "fix";

	return 0;
}
