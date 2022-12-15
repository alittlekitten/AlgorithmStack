#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3765 Celebrity jeopardy
	// 문자열
	string s;
	while (!cin.eof()) {
		getline(cin, s);
		cout << s << '\n';
	}

	return 0;
}
