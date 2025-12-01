#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34813 공통교육과정
	// 문자열
	string s;
	cin >> s;
	if (s[0] == 'F') cout << "Foundation";
	else if (s[0] == 'C') cout << "Claves";
	else if (s[0] == 'V') cout << "Veritas";
	else if (s[0] == 'E') cout << "Exploration";

	return 0;
}
