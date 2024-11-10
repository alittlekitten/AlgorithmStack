#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23627 driip
	// 구현
	string s;
	string tmp = "";
	cin >> s;

	for (int i = s.size() - 5; i < s.size(); ++i) tmp += s[i];

	if (tmp == "driip") cout << "cute";
	else cout << "not cute";

	return 0;
}
