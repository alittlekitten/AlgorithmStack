#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17987 Howl
	// 문자열
	string s;
	cin >> s;

	string result = "";

	for (int i = 0; i <= s.size(); ++i) result += "AW";

	result += "O";

	for (int i = 0; i <= s.size(); i++) result += "HO";

	cout << result;

	return 0;
}
